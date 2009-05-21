#ifndef PYTHONQTWRAPPER_QCLIPBOARD_H
#define PYTHONQTWRAPPER_QCLIPBOARD_H

#include <qclipboard.h>
#include <QObject>

#include <PythonQt.h>

#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>

class PythonQtPublicPromoter_QClipboard : public QClipboard
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QClipboard::event(arg__1); }
};

class PythonQtWrapper_QClipboard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum Mode{
  Clipboard = QClipboard::Clipboard,   Selection = QClipboard::Selection,   FindBuffer = QClipboard::FindBuffer,   LastMode = QClipboard::LastMode};
public slots:
   bool  ownsFindBuffer(QClipboard* theWrappedObject) const;
   bool  event(QClipboard* theWrappedObject, QEvent*  arg__1);
   QString  text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   void setMimeData(QClipboard* theWrappedObject, QMimeData*  data, QClipboard::Mode  mode = QClipboard::Clipboard);
   const QMimeData*  mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   QString  text(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   bool  supportsSelection(QClipboard* theWrappedObject) const;
   void setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void clear(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard);
   bool  supportsFindBuffer(QClipboard* theWrappedObject) const;
   QImage  image(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   bool  ownsClipboard(QClipboard* theWrappedObject) const;
   bool  ownsSelection(QClipboard* theWrappedObject) const;
   void setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   QPixmap  pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
};

#endif // PYTHONQTWRAPPER_QCLIPBOARD_H