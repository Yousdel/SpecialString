#include "exampleappendtosstring.h"

#include "SpecialString/specialstring.h"

ExampleAppendToSString::ExampleAppendToSString()
{
    SpecialString s("hola");
    s.append(string(" mundo\n"));
    s.print();

    s += "Como estan hoy?\n";
    s.print();

    s.append('k');
    s.print();

    SpecialString s2;
    s2 = "\n\n" ;
    s2 += s + "\n\n";
    s2.print();

    SpecialString s3 = "bella.";
    s3 += s3;
    s3.print();

    s3 = s + s3 ;
    s3.print();
}
