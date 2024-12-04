FROM emscripten/emsdk:3.1.73

COPY . .

RUN emcc \
  --bind \
  -sWASM_BIGINT=0 \
  -sEXPORT_ES6=1 \
  -sENVIRONMENT=node \
  -sUSE_ES6_IMPORT_META=1 \
  -sALLOW_TABLE_GROWTH=1 \
  -sEXPORTED_RUNTIME_METHODS="[addFunction]" \
  -o foo.js \
  foo.cpp

RUN node index.js
