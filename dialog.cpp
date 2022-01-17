#include "dialog.h"
#include "ui_dialog.h"
#include "QMessageBox"
#include <QLCDNumber>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_boutton2_clicked()
{

     QString text = "";
    int val = ui->lcdobject->intValue();
     val = val +1;
    for(int i=0;i<=12;i++){
      QString v = QString::number(val);
      QString vm = QString::number(val*i);
      text = text + v + "*" + QString::number(i) + "=" + vm +"<br>";

    }
    ui->textEdit->setHtml(text);
    ui->lcdobject->display(val);
    ui->textEdit->setReadOnly(true);
   // ui->textEdit->setHtml()
}


void Dialog::on_boutton1_clicked()
{
      QString text = "";
    int val = ui->lcdobject->intValue();
    val = val-1;
    for(int i=0;i<=12;i++){
      QString v = QString::number(val);
      QString vm = QString::number(val*i);
      text = text + v + "*" + QString::number(i) + "=" + vm +"<br>";
    }
    ui->textEdit->setHtml(text);
    ui->lcdobject->display(val);

}

