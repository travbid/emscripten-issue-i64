#include <stdint.h>

void foo(intptr_t callpack_ptr) {
    void(*callback)(int64_t) = (void(*)(int64_t))(callpack_ptr);
    int64_t num = 5;
    callback(num);
}
