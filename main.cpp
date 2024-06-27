#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setStyleSheet("QPushButton { background-color: #3498db; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 5px; }");
    w.show();
    return a.exec();
}
