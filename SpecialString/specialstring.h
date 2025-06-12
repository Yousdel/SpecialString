#ifndef SPECIALSTRING_H
#define SPECIALSTRING_H

#include "ssprependfunction.h"


class SpecialString : public SSPrependFunction
{
public:
    //CONSTRUCTORES------------
    SSCONSTRUCTORS(SpecialString, SSPrependFunction)

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
