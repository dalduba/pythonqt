#include "PythonQtWrapper_QSqlQueryModel.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QSize>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qsqldatabase.h>
#include <qsqlerror.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qstringlist.h>

QModelIndex  PythonQtShell_QSqlQueryModel::buddy(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "buddy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "buddy(QSqlQueryModel*,const QModelIndex& )");
      QModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QModelIndex *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::buddy(index);
}
bool  PythonQtShell_QSqlQueryModel::canFetchMore(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canFetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "canFetchMore(QSqlQueryModel*,const QModelIndex& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::canFetchMore(parent);
}
void PythonQtShell_QSqlQueryModel::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "childEvent(QSqlQueryModel*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::childEvent(arg__1);
}
void PythonQtShell_QSqlQueryModel::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "clear(QSqlQueryModel*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::clear();
}
int  PythonQtShell_QSqlQueryModel::columnCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "columnCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "columnCount(QSqlQueryModel*,const QModelIndex& )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::columnCount(parent);
}
void PythonQtShell_QSqlQueryModel::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "customEvent(QSqlQueryModel*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QSqlQueryModel::data(const QModelIndex&  item, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "data(QSqlQueryModel*,const QModelIndex& ,int )");
      QVariant  returnValue;
    void* args[3] = {NULL, (void*)&item, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::data(item, role);
}
bool  PythonQtShell_QSqlQueryModel::dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "dropMimeData(QSqlQueryModel*,const QMimeData* ,Qt::DropAction ,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[6] = {NULL, (void*)&data, (void*)&action, (void*)&row, (void*)&column, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::dropMimeData(data, action, row, column, parent);
}
bool  PythonQtShell_QSqlQueryModel::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "event(QSqlQueryModel*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::event(arg__1);
}
bool  PythonQtShell_QSqlQueryModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "eventFilter(QSqlQueryModel*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSqlQueryModel::fetchMore(const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "fetchMore(QSqlQueryModel*,const QModelIndex& )");
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::fetchMore(parent);
}
Qt::ItemFlags  PythonQtShell_QSqlQueryModel::flags(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "flags");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "flags(QSqlQueryModel*,const QModelIndex& )");
      Qt::ItemFlags  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((Qt::ItemFlags *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::flags(index);
}
QVariant  PythonQtShell_QSqlQueryModel::headerData(int  section, Qt::Orientation  orientation, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "headerData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "headerData(QSqlQueryModel*,int ,Qt::Orientation ,int )");
      QVariant  returnValue;
    void* args[4] = {NULL, (void*)&section, (void*)&orientation, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::headerData(section, orientation, role);
}
QModelIndex  PythonQtShell_QSqlQueryModel::index(int  row, int  column, const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "index");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "index(QSqlQueryModel*,int ,int ,const QModelIndex& )");
      QModelIndex  returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&column, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QModelIndex *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::index(row, column, parent);
}
bool  PythonQtShell_QSqlQueryModel::insertColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "insertColumns(QSqlQueryModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::insertColumns(column, count, parent);
}
bool  PythonQtShell_QSqlQueryModel::insertRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "insertRows(QSqlQueryModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::insertRows(row, count, parent);
}
QMap<int , QVariant >  PythonQtShell_QSqlQueryModel::itemData(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "itemData(QSqlQueryModel*,const QModelIndex& )");
      QMap<int , QVariant >  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QMap<int , QVariant > *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::itemData(index);
}
QList<QModelIndex >  PythonQtShell_QSqlQueryModel::match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "match");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "match(QSqlQueryModel*,const QModelIndex& ,int ,const QVariant& ,int ,Qt::MatchFlags )");
      QList<QModelIndex >  returnValue;
    void* args[6] = {NULL, (void*)&start, (void*)&role, (void*)&value, (void*)&hits, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QList<QModelIndex > *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::match(start, role, value, hits, flags);
}
QMimeData*  PythonQtShell_QSqlQueryModel::mimeData(const QList<QModelIndex >&  indexes) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "mimeData(QSqlQueryModel*,const QList<QModelIndex >& )");
      QMimeData*  returnValue;
    void* args[2] = {NULL, (void*)&indexes};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QMimeData* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::mimeData(indexes);
}
QStringList  PythonQtShell_QSqlQueryModel::mimeTypes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeTypes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "mimeTypes(QSqlQueryModel*)");
      QStringList  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QStringList *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::mimeTypes();
}
void PythonQtShell_QSqlQueryModel::queryChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "queryChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "queryChange(QSqlQueryModel*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::queryChange();
}
bool  PythonQtShell_QSqlQueryModel::removeColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "removeColumns(QSqlQueryModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::removeColumns(column, count, parent);
}
bool  PythonQtShell_QSqlQueryModel::removeRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "removeRows(QSqlQueryModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::removeRows(row, count, parent);
}
void PythonQtShell_QSqlQueryModel::revert()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revert");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "revert(QSqlQueryModel*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::revert();
}
int  PythonQtShell_QSqlQueryModel::rowCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "rowCount(QSqlQueryModel*,const QModelIndex& )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::rowCount(parent);
}
bool  PythonQtShell_QSqlQueryModel::setData(const QModelIndex&  index, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "setData(QSqlQueryModel*,const QModelIndex& ,const QVariant& ,int )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::setData(index, value, role);
}
bool  PythonQtShell_QSqlQueryModel::setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setHeaderData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "setHeaderData(QSqlQueryModel*,int ,Qt::Orientation ,const QVariant& ,int )");
      bool  returnValue;
    void* args[5] = {NULL, (void*)&section, (void*)&orientation, (void*)&value, (void*)&role};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::setHeaderData(section, orientation, value, role);
}
bool  PythonQtShell_QSqlQueryModel::setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setItemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "setItemData(QSqlQueryModel*,const QModelIndex& ,const QMap<int , QVariant >& )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&roles};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::setItemData(index, roles);
}
void PythonQtShell_QSqlQueryModel::sort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "sort(QSqlQueryModel*,int ,Qt::SortOrder )");
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::sort(column, order);
}
QSize  PythonQtShell_QSqlQueryModel::span(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "span");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "span(QSqlQueryModel*,const QModelIndex& )");
      QSize  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSize *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::span(index);
}
bool  PythonQtShell_QSqlQueryModel::submit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "submit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "submit(QSqlQueryModel*)");
      bool  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::submit();
}
Qt::DropActions  PythonQtShell_QSqlQueryModel::supportedDropActions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportedDropActions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "supportedDropActions(QSqlQueryModel*)");
      Qt::DropActions  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((Qt::DropActions *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlQueryModel::supportedDropActions();
}
void PythonQtShell_QSqlQueryModel::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlQueryModel::staticMetaObject,
      "timerEvent(QSqlQueryModel*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlQueryModel::timerEvent(arg__1);
}
QSqlQueryModel* PythonQtWrapper_QSqlQueryModel::new_QSqlQueryModel(QObject*  parent)
{ 
return new PythonQtShell_QSqlQueryModel(parent); }

QVariant  PythonQtWrapper_QSqlQueryModel::data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role) const
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_data(item, role);
}

void PythonQtWrapper_QSqlQueryModel::queryChange(QSqlQueryModel* theWrappedObject)
{
 ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_queryChange();
}

void PythonQtWrapper_QSqlQueryModel::clear(QSqlQueryModel* theWrappedObject)
{
 ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_clear();
}

QSqlError  PythonQtWrapper_QSqlQueryModel::lastError(QSqlQueryModel* theWrappedObject) const
{
return  theWrappedObject->lastError();
}

bool  PythonQtWrapper_QSqlQueryModel::removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_removeColumns(column, count, parent);
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QSqlQuery&  query)
{
 theWrappedObject->setQuery(query);
}

bool  PythonQtWrapper_QSqlQueryModel::canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_canFetchMore(parent);
}

void PythonQtWrapper_QSqlQueryModel::fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent)
{
 ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_fetchMore(parent);
}

QVariant  PythonQtWrapper_QSqlQueryModel::headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_headerData(section, orientation, role);
}

int  PythonQtWrapper_QSqlQueryModel::columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_columnCount(parent);
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject) const
{
return  theWrappedObject->record();
}

bool  PythonQtWrapper_QSqlQueryModel::setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_setHeaderData(section, orientation, value, role);
}

bool  PythonQtWrapper_QSqlQueryModel::insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_insertColumns(column, count, parent);
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject, int  row) const
{
return  theWrappedObject->record(row);
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QString&  query, const QSqlDatabase&  db)
{
 theWrappedObject->setQuery(query, db);
}

QSqlQuery  PythonQtWrapper_QSqlQueryModel::query(QSqlQueryModel* theWrappedObject) const
{
return  theWrappedObject->query();
}

int  PythonQtWrapper_QSqlQueryModel::rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
return  ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_rowCount(parent);
}
