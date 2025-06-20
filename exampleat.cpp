#include "exampleat.h"

#include "SpecialString/specialstring.h"


ExampleAt::ExampleAt()
{
    SpecialString str("gola mundo mundo mundo");
    str[0]= 'H';

    str.print();

    cout << endl <<
            "Cantidad de veces que aparece 'o':" <<
            str.count('o') << endl;
    cout << "cantidad de veces que aparece \" mun\":" <<
            str.count(" mun") <<endl;
    cout << "\"Ho\":"<< str.count("Ho")
         <<endl;
    cout << "\"mundo\":"<< str.count("mundo")
         <<endl;

    string s("Hola mundo, como vas?");
    cout << s << ":" <<
            str.count(s) << endl ;
    string s2("Hola mundo");
    cout << s2 <<":" <<
            str.count(s2) << endl;
}
