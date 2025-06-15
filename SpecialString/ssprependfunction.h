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
    void prepend(const char ch){
        operator= (ch + get());
    }

    // Sobrecarga para QString si está disponible
    #ifdef QSTRING_H
    void prepend(const QString &s) {
        operator= (s.toStdString() + get());
    }
    #endif

    // Operadores de prepend---------------------------------------------------------
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
    // push_front--------------------------------------------------------------------
    void push_front(const SSPrependFunction &s) {
        prepend(s);
    }

    // Sobrecarga para string
    void push_front(const string &s) {
        prepend(s);
    }

    // Sobrecarga para const char*
    void push_front(const char* s) {
        prepend(s);
    }

    // Sobrecarga para QString si está disponible
    #ifdef QSTRING_H
    void push_front(const QString &s) {
        prepend(s);
    }
    #endif

};

#endif // SSPREPENDFUNCTION_H
