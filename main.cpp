#include <QCoreApplication>


//#include "example_constructors_init.h"
//#include "exampleappendtosstring.h"
#include "exampleprepend.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    Example_Constructors_Init ex1;
//    ExampleAppendToSString ex2;
    ExamplePrepend ex;

    exit(0x0);

    return a.exec();
}
