#include "ssfill.h"



void SSFill::fill(char ch, int size){
    if (size > -0x1){
        SSFill str(size, ch);
        operator=(str);
    } else {
        SSFill str(lenght(), ch);
        operator=(str);
    }
}

void SSFill::resize(int newSize, char fillChar){
    SSFill str(toStdString());
    str.resize(newSize);
    for (int i = lenght(); i < str.lenght(); ++i) {
        str[i] = fillChar;
    }
    operator=(str);
}


