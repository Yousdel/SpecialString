#ifndef SSCOUNT_H
#define SSCOUNT_H

#include "ssat.h"

#define COUNT \
    SSCount str(s); \
    return count(str);

class SSCount : public SSAt
{
public:
    SSCONSTRUCTORS(SSCount, SSAt)

    int count() const { return size(); }
    /** cantidad de veces que aparece el caracter ch.*/
    int count(const char &ch) const;
    /** cantidad de veces que aparece la cadena s.*/
    int count(const char *s) const
    {
        COUNT
    }
    /** cantidad de veces que aparece la cadena s.*/
    int count(const std::string &s) const
    {
        COUNT
    }
#if defined (QSTRING_H)
    /** cantidad de veces que aparece la cadena s.*/
    int count(const QString &s) const
    {
        COUNT
    }
#endif
    /** cantidad de veces que aparece la cadena str.*/
    int count(const SSCount &str) const;
};

#endif // SSCOUNT_H
