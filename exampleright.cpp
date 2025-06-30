#include "exampleright.h"

#include "SpecialString/specialstring.h"

ExampleRightAndLeft::ExampleRightAndLeft()
{
    SpecialString s1("Guardacadenas");

    s1.right(7). // imprime "cadenas"
            print();

    s1.right(-1).print(); //imprime la cadena completa
    s1.right(80).print(); //imprime la cadena completa

    SpecialString s2(s1.left(6));
    s2.print();
}
