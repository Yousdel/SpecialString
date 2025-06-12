#ifndef SSPREPENDFUNCTION_H
#define SSPREPENDFUNCTION_H

#include "ssappendfunction.h"

class SSPrependFunction : public SSAppendFunction {
public:
    SSCONSTRUCTORS(SSPrependFunction, SSAppendFunction)

    // Prepend con SSPrependFunction
    void prepend(const SSPrependFunction &s) {
        operator= (s.get() + get());
    }

    // Sobrecarga para string
    void prepend(const string &s) {
        operator= (s + get());
    }

    // Sobrecarga para const char*
    void prepend(const char* s) {
        operator= (string(s) + get());
    }

    // Sobrecarga para QString si está disponible
    #ifdef QSTRING_H
    void prepend(const QString &s) {
        operator= (s.toStdString() + get());
    }
    #endif

    // Operadores de prepend
    SSPrependFunction& operator<<(const string &s) {
        prepend(s);
        return *this;
    }

    SSPrependFunction& operator<<(const char* s) {
        prepend(s);
        return *this;
    }

    #ifdef QSTRING_H
    SSPrependFunction& operator<<(const QString &s) {
        prepend(s);
        return *this;
    }
    #endif
};

#endif // SSPREPENDFUNCTION_H
