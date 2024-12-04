#include <emscripten/bind.h>

void foo(intptr_t callpack_ptr) {
    auto callback = reinterpret_cast<void(*)(int64_t)>(callpack_ptr);
    int64_t num = 5;
    callback(num);
}

EMSCRIPTEN_BINDINGS(module) {
    emscripten::function("foo", &foo);
}
