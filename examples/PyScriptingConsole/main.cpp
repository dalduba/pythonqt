/*
 *
 *  Copyright (C) MeVis Medical Solutions AG All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtTests.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQt_QtAll.h"

#include "PyExampleObject.h"
#include "gui/PythonQtScriptingConsole.h"

#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QLayout>
#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexerpython.h>

int main( int argc, char **argv )
{
  QApplication qapp(argc, argv);

  PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);
  PythonQt_QtAll::init();

  PythonQtObjectPtr  mainContext = PythonQt::self()->getMainModule();
  PythonQtScriptingConsole console(NULL, mainContext);

  QsciScintilla *PythonEdit = new QsciScintilla; // инитилизируем редактор
  PythonEdit->setUtf8(true); // мы же хотим читать кириллицу
  QsciLexerPython * lexPython = new QsciLexerPython();
  PythonEdit->setLexer(lexPython);



  //! Текущая строка кода и ее подсветка
      PythonEdit->setCaretLineVisible(true);
      PythonEdit->setCaretLineBackgroundColor(QColor("gainsboro"));

      //! Выравнивание
      PythonEdit->setAutoIndent(true);
      PythonEdit->setIndentationGuides(false);
      PythonEdit->setIndentationsUseTabs(true);
      PythonEdit->setIndentationWidth(4);

      //! Авто-дополнение кода в зависимости от источника
      PythonEdit->setAutoCompletionSource(QsciScintilla::AcsAll);
      PythonEdit->setAutoCompletionCaseSensitivity(true);
      PythonEdit->setAutoCompletionReplaceWord(true);
      PythonEdit->setAutoCompletionUseSingle(QsciScintilla::AcusAlways);
      PythonEdit->setAutoCompletionThreshold(0);

      //! margin это полоска слева, на которой обычно распологаются breakpoints
      PythonEdit->setMarginsBackgroundColor(QColor("gainsboro"));
      PythonEdit->setMarginType(1, QsciScintilla::NumberMargin);
//      PythonEdit->setMarginLineNumbers(1, true);
      PythonEdit->setMarginWidth(1, 50);

      //! Подсветка соответствий скобок
         PythonEdit->setBraceMatching(QsciScintilla::SloppyBraceMatch);
         PythonEdit->setMatchedBraceBackgroundColor(Qt::yellow);
         PythonEdit->setUnmatchedBraceForegroundColor(Qt::blue);

  // add a QObject to the namespace of the main python context
  PyExampleObject example;
  mainContext.addObject("", &example);
  mainContext.addObject("PythonQtScriptingConsole", &console);
  mainContext.addObject("PythonEdit", PythonEdit);

  mainContext.evalFile(":example.py");

  console.show();
  return qapp.exec();
}

