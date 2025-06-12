#include "SSConstructorsAndInit.h"







void SSConstructorsAndOperatorEquals::print(PrintMode mode) const{
    if (mode == PrintWithCout){
        cout << str;
    }
#ifdef QDEBUG_H
    else if (mode == PrintWithqDebug) {
        qDebug() << str.c_str();
    }
#endif
}
