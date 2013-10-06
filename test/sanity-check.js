var DSP = require("../build/Release/dspapi").DSP;

var ones = new Float32Array([1, 1, 1]);
var twos = new Float32Array([2, 2, 2]);
var result = new Float32Array(3);

console.log("[1, 1, 1] plus [2, 2, 2] is:");

DSP.add(result, ones, twos);
for (var i = 0; i < result.length; i++) {
    console.log(result[i]);
}

