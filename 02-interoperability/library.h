#pragma once

// To make this code portable
#ifdef _MSC_VER
   // Add -DLIBRARY_LIB when building the library
#  ifdef LIBRARY_LIB
#    define LIBRARY_API __declspec(dllexport)
#  else
#    define LIBRARY_API __declspec(dllimport)
#  endif
#else
   // For non MSVC environments, define it as an empty string
#  define LIBRARY_API 
#endif

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API unsigned long factorial(long x);

#ifdef __cplusplus
}
#endif
