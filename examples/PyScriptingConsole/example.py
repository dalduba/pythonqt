from PythonQt.QtGui import *
group = QGroupBox()

main_layout = QVBoxLayout(group)
main_tab = QTabWidget()

main_splitter = QSplitter()

main_layout.addWidget(main_splitter)
console_height = 50
s = group.height-console_height

main_splitter.addWidget(main_tab)
main_splitter.addWidget(PythonQtScriptingConsole)
main_splitter.setOrientation(2)
main_splitter.setSizes([s,s])
main_splitter.setStretchFactor(1, 1)

scripts_widget = QWidget();
main_tab.addTab(scripts_widget, "Scripts")

scripts_hlayout = QHBoxLayout(scripts_widget)
scripts_list = QListView()
scripts_gui = QWidget();

scripts_splitter = QSplitter()
scripts_splitter.addWidget(scripts_list)
scripts_splitter.addWidget(scripts_gui)
scripts_hlayout.addWidget(scripts_splitter)
scripts_splitter.setStretchFactor(1, 1)
scripts_splitter.setSizes([80,80])


editor_widget = QWidget();
Editor_tab = QTabWidget()

#editor_layout.addWidget(Editor_tab)


#Editor_tab.addTab(PythonEdit, "f1")

#main_tab.addTab(editor_widget, "Editor")
editor_splitter = QSplitter()

editor_hlayout = QHBoxLayout(editor_widget)

Editor_tab.addTab(PythonEdit, "f1")
main_tab.addTab(editor_widget, "Editor")

editor_tree = QTreeView()

dirmodel = QDirModel()
import os
#if os.name == 'posix':
#	ind = dirmodel.setRootPath("/")
#else:
#	ind = dirmodel.setRootPath(dirmodel.myComputer())
#editor_tree.setRootIndex(ind);

editor_tree.setModel(dirmodel)
editor_tree.setRootIndex(dirmodel.index("/")); 

editor_splitter.addWidget(editor_tree)
editor_splitter.addWidget(Editor_tab)

editor_hlayout.addWidget(editor_splitter)

group.show()
#box = QVBoxLayout(group)
#push1 =  QPushButton(group)
#box.addWidget(push1)
#push2 =  QPushButton(group)
#box.addWidget(push2)
#check =  QCheckBox(group)
#check.text = 'check me'
#group.title = 'my title'
#push1.text = 'press me'
#push2.text = 'press me2'
#box.addWidget(check)

