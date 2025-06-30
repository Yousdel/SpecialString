#ifndef SSRIGHT_H
#define SSRIGHT_H


#include "ssfill.h"

class SSRight : public SSFill
{
public:
    SSCONSTRUCTORS(SSRight, SSFill)

    /** devuelve una cadena con n caracteres
     *  de la derecha de la cadena original.
La cadena completa es devuelta si n es mayor
o igual que size(), o menor que cero.*/
    const  SSRight right(int n) const;
};

#endif // SSRIGHT_H
