#ifndef SPECIALSTRING_H
#define SPECIALSTRING_H

#include "ssfill.h"


class SpecialString : public SSFill
{
public:
    //CONSTRUCTORES------------
    SSCONSTRUCTORS(SpecialString, SSFill)

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
