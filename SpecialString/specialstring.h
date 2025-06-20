#ifndef SPECIALSTRING_H
#define SPECIALSTRING_H

#include "sscount.h"


class SpecialString : public SSCount
{
public:
    //CONSTRUCTORES------------
    SSCONSTRUCTORS(SpecialString, SSCount)

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
