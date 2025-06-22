#include "examplefill.h"

#include "SpecialString/specialstring.h"



ExampleFill::ExampleFill()
{
    SpecialString s("Berlin");

    s.print();
    s.fill('z');
    s.print();

    s.fill('k', 23);
    s.print();

    s.resize(5);
    s.print();

    s.resize(50);
    s.print();

    s.resize(60, '-');
    s.print();
}
