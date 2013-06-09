#include "qxmldemo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QXMLDemo w;
    w.show();
    
    return a.exec();
}
