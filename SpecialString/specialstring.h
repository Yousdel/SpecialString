#ifndef SPECIALSTRING_H
#define SPECIALSTRING_H

#include "ssleft.h"

class SpecialString : public SSLeft
{
public:
    //CONSTRUCTORES------------
    SSCONSTRUCTORS(SpecialString, SSLeft)

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
