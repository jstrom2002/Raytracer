#ifndef RANDOMH
#define RANDOMH

#include <cstdlib>
#include "vec3.h"

inline double random_double() {
    return rand() / (RAND_MAX + 1.0);
}


#endif
