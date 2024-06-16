#pragma once

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

TOOLKIT_API class Toolkit {
public:
    Toolkit() = delete;
    Toolkit(int function);
    Toolkit(const Toolkit & other);
    Toolkit & operator=(Toolkit & other);

protected:
    int _func;
};

