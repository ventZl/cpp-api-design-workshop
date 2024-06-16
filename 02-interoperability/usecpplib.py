from ctypes import *

# Change to cfact.dll on Windows
lib = CDLL("./libcppfact.so")
print(lib.factorial(5))
