#include "example_constructors_init.h"

#include "SpecialString/specialstring.h"

Example_Constructors_Init::Example_Constructors_Init()
{
    const
    SpecialString s;
    s.print();

    SpecialString s2("hola mundo\n");
    s2.print();
    s2 = "hola gente\n";
    s2.print();

    SpecialString s3 = "hola gente\n";
    s3.print();
    s3 = "hola niños. Cómo están ?\n";
    s3.print(SpecialString::PrintWithqDebug);
}
