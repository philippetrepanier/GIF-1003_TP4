#include "personnegui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PersonneGUI w;
    w.show();
    return a.exec();
}
