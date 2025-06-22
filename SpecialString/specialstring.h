#ifndef SPECIALSTRING_H
#define SPECIALSTRING_H

#include "ssright.h"


class SpecialString : public SSRight
{
public:
    //CONSTRUCTORES------------
    SSCONSTRUCTORS(SpecialString, SSRight)

    SpecialString &operator =(const SSAppendFunction &s) {
        SSConstructorsAndOperatorEquals::operator=(s);
        return *this;
    }
    SpecialString &operator =(const char *s) {
        SSConstructorsAndOperatorEquals::operator=(s);
        return *this;
    }
};

#endif // SPECIALSTRING_H
