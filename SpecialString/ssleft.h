#ifndef SSLEFT_H
#define SSLEFT_H

#include "ssright.h"


class SSLeft : public SSRight
{
public:
    SSCONSTRUCTORS(SSLeft, SSRight);

    /** devuelve una cadena con n caracteres
     *  de la izquierda de la cadena original.
La cadena completa es devuelta si n es mayor
o igual que size(), o menor que cero.*/
    const SSLeft left(int n) const;
};

#endif // SSLEFT_H
