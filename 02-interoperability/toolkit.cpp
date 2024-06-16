#include "toolkit.h"

Toolkit::Toolkit(int function): _func{function} {
}

Toolkit::Toolkit(const Toolkit & other) { 
    _func = other._func; 
}

Toolkit & Toolkit::operator=(Toolkit &other) {
    _func = other._func; 
    return *this;
}


