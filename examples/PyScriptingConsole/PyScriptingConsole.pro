# --------- PyScriptingConsole profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyScriptingConsole
TEMPLATE = app

DESTDIR           = ../../lib

mac:CONFIG-= app_bundle

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  
include ( ../../build/PythonQt_QtAll.prf )  

contains(QT_MAJOR_VERSION, 5) {
  QT += widgets
}
INCLUDEPATH += /home/dal/workspace/QScintilla-gpl-2.9/Qt4Qt5/Qsci/
LIBS += -L/home/dal/workspace/QScintilla-gpl-2.9/Qt4Qt5 -lqscintilla2
HEADERS +=                    \
  PyExampleObject.h             
  
SOURCES +=                    \
  PyExampleObject.cpp         \  
  main.cpp        

RESOURCES += PyScriptingConsole.qrc
LIBS += -L/usr/lib/x86_64-linux-gnu/ -lpython3.4m
