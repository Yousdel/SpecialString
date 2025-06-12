#ifndef SSAPPENDFUNCTION_H
#define SSAPPENDFUNCTION_H

#include "SSConstructorsAndInit.h"

#define SSCONSTRUCTORS(newClass, baseClass) \
    newClass() : baseClass() {} \
    newClass(const string &s) : baseClass(s) {} \
    newClass(const char *s) : baseClass(s) {} \
    newClass(const newClass &s) : baseClass(s) {} \
    newClass(const baseClass &s) : baseClass(s) {} \
    SSQT_CONSTRUCTOR_HELPER(newClass, baseClass)

#if defined(QSTRING_H)
#define SSQT_CONSTRUCTOR_HELPER(newClass, baseClass) \
    newClass(const QString &s) : baseClass(s) {}
#else
#define SSQT_CONSTRUCTOR_HELPER
#endif


class SSAppendFunction : public SSConstructorsAndOperatorEquals
{
public:
    SSCONSTRUCTORS(SSAppendFunction, SSConstructorsAndOperatorEquals)

    /**
     * agregar la cadena s a la cadena especial
     */
    void append(const string &s)
    {
        string s1 = get();    //a s1 agregarle s
        s1.append(s);
        operator=(s1);
    }
    void append(const char *s)
    {
        string s1 = get();
        s1.append(s);
        operator=(s1);
    }
    void append(const char ch){
        string s1 = get();
        s1.push_back(ch);
        operator=(s1);
    }
    void append(const SSAppendFunction &s)
    {
        string s1 = get(), s2 = s.get();    //a s1 agregarle s
        s1.append(s2);
        operator=(s1);
    }
#ifdef QSTRING_H
    void append(const QString &s)
    {
        string s1 = get();
        s1.append(s.toStdString());
        operator=(s1);
    }
#endif
    //----------------------------------------OPERADOR += -------------------------------------
    SSAppendFunction &operator+=(const string &s){
        append(s);
        return (*this);
    }
    SSAppendFunction &operator+=(const char *s){
        append(s);
        return (*this);
    }
    SSAppendFunction &operator+=(const char ch){
        append(ch);
        return (*this);
    }
    SSAppendFunction &operator+=(const SSAppendFunction &s){
        append(s);
        return (*this);
    }
    //----------------------------------------OPERADOR + -------------------------------------
    const
    SSAppendFunction operator+(const char *s){
        SSAppendFunction s_(*this);
        s_.append(s);
        return s_;
    }
    const
    SSAppendFunction operator+(const string &s){
        SSAppendFunction s_(*this);
        s_.append(s);
        return s_;
    }
    const
    SSAppendFunction operator+(const SSAppendFunction &s){
        SSAppendFunction s_(*this);
        s_.append(s);
        return s_;
    }
#ifdef QSTRING_H
    const
    SSAppendFunction operator+(const QString &s){
        SSAppendFunction s_(*this);
        s_.append(s);
        return s_;
    }
#endif
};

#endif // SSAPPENDFUNCTION_H
