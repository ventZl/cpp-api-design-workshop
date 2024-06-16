#include "api.h"

int main(int argc, char ** argv) {
    auto canvas = new Canvas();
    auto renderer = new Renderer(canvas);

    renderer->rectangle(0, 0, 320, 240, 240, 240, 240);
}
