QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    state2.cpp \
    state1.cpp

HEADERS += \
    hsm.h \
    state2.h \
    state1.h


INCLUDEPATH += $$PWD/../
INCLUDEPATH += $$(ECM_ROOT)/tools/galil/include/

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../common/release/ -lcommon
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../common/debug/ -lcommon
else:unix:!macx: LIBS += -L$$OUT_PWD/../common/ -lcommon

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../library_galilMotionController/release/ -llibrary_galilMotionController
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../library_galilMotionController/debug/ -llibrary_galilMotionController
else:unix:!macx: LIBS += -L$$OUT_PWD/../library_galilMotionController/ -llibrary_galilMotionController

INCLUDEPATH += $$PWD/../library_galilMotionController
DEPENDPATH += $$PWD/../library_galilMotionController


unix:!macx|win32: LIBS += -L$$PWD/../../tools/galil/lib/dynamic/x86/ -lgclib
unix:!macx|win32: LIBS += -L$$PWD/../../tools/galil/lib/dynamic/x86/ -lgclibo

INCLUDEPATH += $$PWD/../../tools/galil/lib/dynamic/x86
DEPENDPATH += $$PWD/../../tools/galil/lib/dynamic/x86

win32: LIBS += -L$(ECM_ROOT)/tools/galil/dll/x86/ -lgclib -lgclibo
else:unix: LIBS += -L$(ECM_ROOT)/tools/galil/dll/x86/ -lgclib -lgclibo

