from ctypes import *

# Change to cfact.dll on Windows
lib = CDLL("./libcfact.so")
print(lib.factorial(5))
