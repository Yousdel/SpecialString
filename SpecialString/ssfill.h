#ifndef SSFILL_H
#define SSFILL_H

#include "sscount.h"

/**fill() y resize()*/
class SSFill : public SSCount
{
public:
    SSCONSTRUCTORS(SSFill, SSCount)

    /** cada caracter de la cadena sera
     * cambiado a ch. Si size no es -1(defecto),
     * la cadena cambiara a un largo de size antes del
     * cambio de caracteres.
     *
     * ENG: Sets every character in the string to
     * character ch. If size is different
     * from -1 (default), the string is
     * resized to size beforehand.*/
    void fill(char ch, int size = -1);

    /** da un nuevo tamaño o largo (newSize) a la cadena.*/
    void resize(int newSize)
    {
        get().resize(newSize);
    }

    void resize(int newSize, char fillChar);
};

#endif // SSFILL_H
