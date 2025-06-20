#include "exampleprepend.h"

#include "SpecialString/specialstring.h"



ExamplePrepend::ExamplePrepend()
{
    SpecialString s("mundo");

    s.prepend("hola ");
    s << "saludos ";

    s.print();
    cout << s.size() << endl;

    s.clear();
    s << "hola";
    s.push_back("\n");
    s.print();
}
