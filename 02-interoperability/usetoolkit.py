from ctypes import *

# Change to tk.dll on Windows
lib = CDLL("./libtk.so")
toolkit = lib.toolkit_make(5);
another_toolkit = lib.toolkit_copy(toolkit);
