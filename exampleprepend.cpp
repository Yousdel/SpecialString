#include "exampleprepend.h"

#include "SpecialString/specialstring.h"



ExamplePrepend::ExamplePrepend()
{
    SpecialString s("mundo");

    s.prepend("hola ");
    s << "saludos ";

    s.print();
    cout << s.size() << endl;
}
