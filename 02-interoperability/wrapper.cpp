#include "wrapper.h"
#include "toolkit.h"
#include <cstdlib>
#include <cstdio>

struct CToolkit * toolkit_make(int func) {
    struct CToolkit * tk = (struct CToolkit *) malloc(sizeof(struct CToolkit));
    tk->_toolkit = new Toolkit(func);
    printf("New toolkit at %p\n", tk->_toolkit);
    return tk;
}

struct CToolkit * toolkit_copy(struct CToolkit * other) {
    if (other == NULL)
    {
        return NULL;
    }
    if (other->_toolkit == NULL)
    {
        return NULL;
    }
    printf("Copying toolkit from %p\n", other->_toolkit);
    struct CToolkit * tk = (struct CToolkit *) malloc(sizeof(struct CToolkit));
    tk->_toolkit = new Toolkit(* (Toolkit *) other->_toolkit);
    return tk;
}


