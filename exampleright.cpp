#include "exampleright.h"

#include "SpecialString/specialstring.h"

ExampleRight::ExampleRight()
{
    SpecialString s1("Guardacadenas");

    s1.right(7); // s1 == "cadenas"
    s1.print();
}
