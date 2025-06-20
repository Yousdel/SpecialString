#ifndef SSFILL_H
#define SSFILL_H

#include "sscount.h"

class SSFill : public SSCount
{
public:
    SSCONSTRUCTORS(SSFill, SSCount)

    /** cada caracter de la cadena sera
     * cambiado a ch. Si size no es -1(defecto),
     * la cadena cambiara a size antes del
     * cambio de caracteres.
     *
     * ENG: Sets every character in the string to
     * character ch. If size is different
     * from -1 (default), the string is
     * resized to size beforehand.*/
    void fill(char ch, int size = -1);
};

#endif // SSFILL_H
