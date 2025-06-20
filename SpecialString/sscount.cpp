#include "sscount.h"

int SSCount::count(const char &ch) const
{
    int index = 0x0, c = 0x0;
    for (; index < count(); ++index) {
        if (at(index) == ch)
            ++c;
    }
    return c;
}

int SSCount::count(const SSCount &str) const{
    int c = 0x0;
    int index = 0x0;
    for (; index < count() - str.count() + 0x1; ++index) {
        int my_index = index,
            str_index = 0x0, c2 = 0x0;
        for (; str_index < str.count(); ++str_index, ++my_index) {
            if (at(my_index) == str.at(str_index))
                ++c2;
            else break;
        }
        if (c2 == str.count())
            ++c;
    }
    return c;
}


