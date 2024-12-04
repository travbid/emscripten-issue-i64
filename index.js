import module from './foo.js';

console.log(module);

const wasm = await module();


function mycallback(numLow, numHigh) {
    console.log('mycallback', numLow, numHigh);
}

const cbPtr = wasm.addFunction(mycallback, 'vj');

wasm.foo(cbPtr);
