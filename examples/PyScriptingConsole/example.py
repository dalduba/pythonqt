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



Editor_tab = QTabWidget()
#editor_layout.addWidget(Editor_tab)


#Editor_tab.addTab(PythonEdit, "f1")

#main_tab.addTab(editor_widget, "Editor")

Editor_tab.addTab(PythonEdit, "f1")
main_tab.addTab(Editor_tab, "Editor")

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

