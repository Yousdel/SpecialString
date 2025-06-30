#include "ssleft.h"



const SSLeft SSLeft::left(int n) const
{
    if (n >=length() || n <= -0x1) return *this;
    SSLeft str;
    for (int i = 0; i < n; ++i) {
        str += at(i);
    }
    return str;
}

