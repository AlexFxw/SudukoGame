#include "infobox.h"
#include "ui_infobox.h"

InfoBox::InfoBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoBox)
{
    ui->setupUi(this);
}

InfoBox::~InfoBox()
{
    delete ui;
}

void InfoBox::SetText(QString qstr)
{
    ui->label->setText(qstr);
}

void InfoBox::on_pushButton_clicked()
{
    this->close();
}
