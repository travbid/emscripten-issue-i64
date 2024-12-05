import module from './foo.js';

const wasm = await module();

function mycallback(numLow, numHigh) {
    console.log('mycallback', numLow, numHigh);
}

const cbPtr = wasm.addFunction(mycallback, 'vj');

wasm._foo(cbPtr);
