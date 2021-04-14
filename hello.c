#include "emscripten/emscripten.h"

// this is the exported C function we want to call from JS
EMSCRIPTEN_KEEPALIVE int addc(int a, int b) {
    return a + b;
}

int main() {
    return 0;
}
