#ifndef PYTHONQTWRAPPER_QTEXTCURSOR_H
#define PYTHONQTWRAPPER_QTEXTCURSOR_H

#include <qtextcursor.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextBlock>
#include <QTextDocumentFragment>
#include <QVariant>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>

class PythonQtWrapper_QTextCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MoveMode MoveOperation SelectionType )
enum MoveMode{
  MoveAnchor = QTextCursor::MoveAnchor,   KeepAnchor = QTextCursor::KeepAnchor};
enum MoveOperation{
  NoMove = QTextCursor::NoMove,   Start = QTextCursor::Start,   Up = QTextCursor::Up,   StartOfLine = QTextCursor::StartOfLine,   StartOfBlock = QTextCursor::StartOfBlock,   StartOfWord = QTextCursor::StartOfWord,   PreviousBlock = QTextCursor::PreviousBlock,   PreviousCharacter = QTextCursor::PreviousCharacter,   PreviousWord = QTextCursor::PreviousWord,   Left = QTextCursor::Left,   WordLeft = QTextCursor::WordLeft,   End = QTextCursor::End,   Down = QTextCursor::Down,   EndOfLine = QTextCursor::EndOfLine,   EndOfWord = QTextCursor::EndOfWord,   EndOfBlock = QTextCursor::EndOfBlock,   NextBlock = QTextCursor::NextBlock,   NextCharacter = QTextCursor::NextCharacter,   NextWord = QTextCursor::NextWord,   Right = QTextCursor::Right,   WordRight = QTextCursor::WordRight};
enum SelectionType{
  WordUnderCursor = QTextCursor::WordUnderCursor,   LineUnderCursor = QTextCursor::LineUnderCursor,   BlockUnderCursor = QTextCursor::BlockUnderCursor,   Document = QTextCursor::Document};
public slots:
QTextCursor* new_QTextCursor();
QTextCursor* new_QTextCursor(QTextDocument*  document);
QTextCursor* new_QTextCursor(QTextFrame*  frame);
QTextCursor* new_QTextCursor(const QTextBlock&  block);
QTextCursor* new_QTextCursor(const QTextCursor&  cursor);
void delete_QTextCursor(QTextCursor* obj) { delete obj; } 
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   bool  isNull(QTextCursor* theWrappedObject) const;
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   bool  atStart(QTextCursor* theWrappedObject) const;
   void selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const;
   int  blockNumber(QTextCursor* theWrappedObject) const;
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   bool  operator_equal(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void beginEditBlock(QTextCursor* theWrappedObject);
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   bool  operator_less(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   int  position(QTextCursor* theWrappedObject) const;
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   int  selectionStart(QTextCursor* theWrappedObject) const;
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   int  columnNumber(QTextCursor* theWrappedObject) const;
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   void deletePreviousChar(QTextCursor* theWrappedObject);
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   void insertBlock(QTextCursor* theWrappedObject);
   void removeSelectedText(QTextCursor* theWrappedObject);
   QString  selectedText(QTextCursor* theWrappedObject) const;
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   int  anchor(QTextCursor* theWrappedObject) const;
   bool  atEnd(QTextCursor* theWrappedObject) const;
   void deleteChar(QTextCursor* theWrappedObject);
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   void clearSelection(QTextCursor* theWrappedObject);
   void endEditBlock(QTextCursor* theWrappedObject);
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTCURSOR_H