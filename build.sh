#!/bin/bash
#qmake
#PYTHONQT_STATIC=1 PYTHON_PATH=/usr/bin PYTHON_LIB=/usr/lib qmake-qt4; CPLUS_INCLUDE_PATH=/usr/include/python3.4m/ make all -j5

#mkdir -p build

cmake -DCMAKE_BUILD_TYPE=Debug -DPython_ADDITIONAL_VERSIONS=3.4 -DPythonQt_Wrap_QtAll=True -DQT_QMAKE_EXECUTABLE=/usr/bin/qmake-qt4 ./; make -j5
