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

extern "C" {
    
struct CToolkit {
    void * _toolkit;
};

TOOLKIT_API struct CToolkit * toolkit_make(int func);
TOOLKIT_API struct CToolkit * toolkit_copy(struct CToolkit * other);

}
