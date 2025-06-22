#ifndef SSAT_H
#define SSAT_H

#include "sssize.h"

class SSAt : public SSSize
{
public:
    SSCONSTRUCTORS(SSAt, SSSize)

    /**Para obtener el caracter en el indice index*/
    char at(int index) const {
        return toStdString().at(index);
    }

    /**Para cambiar el caracter en el indice index*/
    char &operator[](int index)
    {
        return get().at(index);
    }
};

#endif // SSAT_H
