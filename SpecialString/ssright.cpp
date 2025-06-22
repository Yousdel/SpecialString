#include "ssright.h"



const SSRight &SSRight::right(int n)
{
    SSRight sres;
    for (int i = lenght() - n; i < lenght(); ++i) {
        sres += at(i);
    }
    operator=(sres);
    return *this;
}
