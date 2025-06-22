#ifndef SSRIGHT_H
#define SSRIGHT_H


#include "ssfill.h"

class SSRight : public SSFill
{
public:
    SSCONSTRUCTORS(SSRight, SSFill)

    /** devuelve una cadena con n caracteres de la derecha de la cadena original,
     * transformando la cadena original a esta cadena.*/
    const SSRight &right(int n);
};

#endif // SSRIGHT_H
