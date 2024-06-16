#include "toolkit.h"

int main(int, char **)
{
    auto window = Widget::make_widget("window");
    auto text = Widget::make_widget("text");
    window->add_child(text);
    auto widget = window->find_child("something");
    (void) widget;
}
