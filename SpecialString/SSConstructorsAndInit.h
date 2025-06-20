#ifndef SSCONSTRUCTORSANDINIT_H
#define SSCONSTRUCTORSANDINIT_H

//qt
#include <QDebug>
#include <QString>

//c++
#include <string>
#include <iostream>
#include <locale>

#ifdef _WIN32
#include <windows.h>
#endif

#define SYSTEM_LOC \
setConsoleOutputForWindows(); \
std::locale::global(std::locale(""));


#define SSCONSTRUCTORS(newClass, baseClass) \
    newClass() : baseClass() {} \
    newClass(const string &s) : baseClass(s) {} \
    newClass(const char *s) : baseClass(s) {} \
    newClass(char ch) : baseClass(ch) {} \
    newClass(int size, char ch) : baseClass(size, ch) {} \
    newClass(const newClass &s) : baseClass(s) {} \
    newClass(const baseClass &s) : baseClass(s) {} \
    SSQT_CONSTRUCTOR_HELPER(newClass, baseClass)

#if defined(QSTRING_H)
#define SSQT_CONSTRUCTOR_HELPER(newClass, baseClass) \
    newClass(const QString &s) : baseClass(s) {}
#else
#define SSQT_CONSTRUCTOR_HELPER
#endif


using namespace std;

/**
 * @brief Constructores y operadores = para
 * inicializar y cambiar valor.
 */
class SSConstructorsAndOperatorEquals
{
private:
    string str;
    void setConsoleOutputForWindows(){
#ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
#endif
    }

public:
    //CONSTRUCTORES------------
    SSConstructorsAndOperatorEquals() {
        SYSTEM_LOC
    }
    SSConstructorsAndOperatorEquals(const string &s) : str(s) {
        SYSTEM_LOC
    }
    SSConstructorsAndOperatorEquals(const char *s) : str(s) {
        SYSTEM_LOC
    }
    SSConstructorsAndOperatorEquals(char ch) {
        SYSTEM_LOC
        str.push_back(ch);
    }
    SSConstructorsAndOperatorEquals(int size, char ch) {
        SYSTEM_LOC
        str.insert(str.begin(), size, ch);
    }
#ifdef QSTRING_H
    SSConstructorsAndOperatorEquals(const QString &s) {
        SYSTEM_LOC
        str = s.toStdString();
    }
#endif
    SSConstructorsAndOperatorEquals(const SSConstructorsAndOperatorEquals &s) {
        SYSTEM_LOC
        str = s.get();
    }

    //------------------------------------------OPERADOR = -------------------------------------------
    SSConstructorsAndOperatorEquals &operator=(const string &other) {
        str = other;
        return (*this);
    }

    SSConstructorsAndOperatorEquals &operator=(const char *other) {
        str = other;
        return (*this);
    }
#ifdef QSTRING_H
    SSConstructorsAndOperatorEquals &operator=(const QString &other) {
        str = other.toStdString();
        return (*this);
    }
#endif
    SSConstructorsAndOperatorEquals &operator=(const SSConstructorsAndOperatorEquals &other) {
        str = other.str;
        return (*this);
    }
    enum PrintMode {PrintWithqDebug, PrintWithCout};
    void print(PrintMode mode = PrintWithCout) const;
    std::string &get() {
        return str;
    }
    const std::string &get() const {
        return str;
    }
};

#endif // SSCONSTRUCTORSANDINIT_H
