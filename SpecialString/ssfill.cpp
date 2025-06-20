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
