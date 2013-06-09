#ifndef QXMLDEMO_H
#define QXMLDEMO_H

#include <QWidget>

namespace Ui {
class QXMLDemo;
}

class QXMLDemo : public QWidget
{
    Q_OBJECT
    
public:
    explicit QXMLDemo(QWidget *parent = 0);
    ~QXMLDemo();
    
private:
    Ui::QXMLDemo *ui;
};

#endif // QXMLDEMO_H
