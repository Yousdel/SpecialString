QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        SpecialString/SSConstructorsAndInit.cpp \
        SpecialString/specialstring.cpp \
        SpecialString/sscount.cpp \
        SpecialString/ssfill.cpp \
        example_constructors_init.cpp \
        exampleappendtosstring.cpp \
        exampleat.cpp \
        examplefill.cpp \
        exampleprepend.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    SpecialString/SSConstructorsAndInit.h \
    SpecialString/specialstring.h \
    SpecialString/ssappendfunction.h \
    SpecialString/ssat.h \
    SpecialString/sscount.h \
    SpecialString/ssfill.h \
    SpecialString/ssprependfunction.h \
    SpecialString/sssize.h \
    example_constructors_init.h \
    exampleappendtosstring.h \
    exampleat.h \
    examplefill.h \
    exampleprepend.h
