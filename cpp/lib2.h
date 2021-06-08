#ifndef LIB_LEVEL_2
#define LIB_LEVEL_2

#include <cmath>
#include <lib1.h>

namespace lib
{
    auto abs(auto number)
    {
        return std::sqrt(lib::sqr(number));
    }
}

#endif // LIB_LEVEL_2