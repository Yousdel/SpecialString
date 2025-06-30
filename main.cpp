#include <QCoreApplication>


#include "example_constructors_init.h"
#include "exampleappendtosstring.h"
#include "exampleprepend.h"
#include "exampleat.h"
#include "examplefill.h"
#include "exampleright.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    Example_Constructors_Init ex1;
//    ExampleAppendToSString ex2;
//    ExamplePrepend ex;
//    ExampleAt ex3;
//    ExampleFill ex4;
    ExampleRightAndLeft ex5;

    exit(0x0);

    return a.exec();
}
