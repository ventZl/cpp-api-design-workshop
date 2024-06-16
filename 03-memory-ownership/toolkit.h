#pragma once

#include <string>
#include <vector>

// To make this code portable
#ifdef _MSC_VER
   // Add -DTOOLKIT_LIB when building the library
#  ifdef TOOLKIT_LIB
#    define TOOLKIT_API __declspec(dllexport)
#  else
#    define TOOLKIT_API __declspec(dllimport)
#  endif
#else
   // For non MSVC environments, define it as an empty string
#  define TOOLKIT_API 
#endif

TOOLKIT_API
class Widget {
public:
    Widget(const std::string & name): _name{name} {}

    static Widget * make_widget(const std::string & name);

    void add_child(Widget * child);
    Widget * find_child(const std::string & name);
    const std::string & name() const { return _name; }

    /* .... */

protected:
    std::string _name;
    std::vector<Widget *> _children;
};
