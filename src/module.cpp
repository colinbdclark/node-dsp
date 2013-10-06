#include <node.h>
#include <v8.h>

#include "dsp.h"
#include "filter.h"
#include "fft.h"

using namespace v8;

extern "C" void init (v8::Handle<v8::Object> target) {
	v8::HandleScope scope;

	NodeDSP::Initialize(target);
	NodeFilter::Initialize(target);
	NodeFFT::Initialize(target);
}

void Initialize(Handle<Object> exports) {
    HandleScope scope;
    
    NodeDSP::Initialize(exports);
    NodeFilter::Initialize(exports);
    NodeFFT::Initialize(exports);
}

NODE_MODULE(dspapi, Initialize)
