# --------- PyScriptingConsole profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyScriptingConsole
TEMPLATE = app

DESTDIR           = ../../bin
  
include ( ../../build/PythonQt.prf )  
include ( ../../build/PythonQtGui.prf )  

HEADERS +=                    \
  PyExampleObject.h             
  
SOURCES +=                    \
  PyExampleObject.cpp         \  
  main.cpp        

RESOURCES += PyScriptingConsole.qrc
