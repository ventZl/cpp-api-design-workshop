#include "toolkit.h"

Widget * Widget::make_widget(const std::string & name)
{
    return new Widget(name);
}

void Widget::add_child(Widget * child)
{
    _children.push_back(child);
}

Widget * Widget::find_child(const std::string & name)
{
    for (auto child : _children)
    {
        if (child->name() == name)
        {
            return child;
        }
    }

    return nullptr;
}
