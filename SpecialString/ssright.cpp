#include "ssright.h"



const SSRight SSRight::right(int n) const
{
    if (n >=length() || n <= -0x1) return *this;
    SSRight sres;
    for (int i = length() - n; i < length(); ++i) {
        sres += at(i);
    }
    return sres;
}
