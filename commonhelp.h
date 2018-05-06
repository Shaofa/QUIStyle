#ifndef COMMONHELP_H
#define COMMONHELP_H

#include <QFile>
#include <QApplication>

class CommonHelper {
public:
    static void setStyle(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qApp->setFont(QFont("Microsoft Yahei UI", 9));
        qss.close();
    }
};

#endif // COMMONHELP_H
