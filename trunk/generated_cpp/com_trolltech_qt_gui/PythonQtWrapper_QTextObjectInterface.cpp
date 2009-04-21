#include "PythonQtWrapper_QTextObjectInterface.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>
#include <qtextdocument.h>
#include <qtextformat.h>

void PythonQtShell_QTextObjectInterface::drawObject(QPainter*  painter, const QRectF&  rect, QTextDocument*  doc, int  posInDocument, const QTextFormat&  format)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawObject");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextObjectInterface::staticMetaObject,
      "drawObject(QTextObjectInterface*,QPainter* ,const QRectF& ,QTextDocument* ,int ,const QTextFormat& )");
    void* args[6] = {NULL, (void*)&painter, (void*)&rect, (void*)&doc, (void*)&posInDocument, (void*)&format};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
QSizeF  PythonQtShell_QTextObjectInterface::intrinsicSize(QTextDocument*  doc, int  posInDocument, const QTextFormat&  format)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "intrinsicSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextObjectInterface::staticMetaObject,
      "intrinsicSize(QTextObjectInterface*,QTextDocument* ,int ,const QTextFormat& )");
      QSizeF  returnValue;
    void* args[4] = {NULL, (void*)&doc, (void*)&posInDocument, (void*)&format};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSizeF *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QSizeF  result;
return result;
}
QTextObjectInterface* PythonQtWrapper_QTextObjectInterface::new_QTextObjectInterface()
{ 
return new PythonQtShell_QTextObjectInterface(); }
