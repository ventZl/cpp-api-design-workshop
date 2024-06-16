#pragma once

#include <string>
#pragma GCC diagnostic ignored "-Wunused-parameter"

class Renderer;

class Canvas {
public:
    Canvas() {}

    /* .... */
};

class Picture {
public:
    Picture();
    Picture(Renderer * renderer): _renderer{renderer} {}
    Picture(Renderer * renderer, std::string * filename);

    /* ..... */
    friend class Renderer;

protected:
    Renderer * _renderer;
};

class Renderer {
public:
    Renderer(Canvas * canvas): _canvas{canvas} {}
    void rectangle(int x1, int y1, int x2, int y2, int r, int g, int b) { }
    void image(Picture * picture, int x, int y) { }
    int get_last_error() const { return _last_error; }
    Canvas * canvas() { return _canvas; }

protected:
    Canvas * _canvas;
    mutable int _last_error;
};
