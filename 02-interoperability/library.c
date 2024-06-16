#include "library.h"

unsigned long factorial(long x)
{
    if (x == 1)
    {
        return x;
    }

    return x * factorial(x - 1);
}
