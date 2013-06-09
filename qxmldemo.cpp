#include "qxmldemo.h"
#include "ui_qxmldemo.h"

QXMLDemo::QXMLDemo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QXMLDemo)
{
    ui->setupUi(this);
}

QXMLDemo::~QXMLDemo()
{
    delete ui;
}
