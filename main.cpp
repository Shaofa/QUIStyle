#include "mainwindow.h"
#include <QApplication>
#include "commonhelp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CommonHelper::setStyle("style\\default.css");

    MainWindow w;
    w.show();

    return a.exec();
}
