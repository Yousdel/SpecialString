#ifndef SPECIALSTRING_H
#define SPECIALSTRING_H

#include "sssize.h"


class SpecialString : public SSSize
{
public:
    //CONSTRUCTORES------------
    SSCONSTRUCTORS(SpecialString, SSSize)

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
