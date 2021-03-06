#include "ip_url.h"
#include "ui_ip_url.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Ip_url::Ip_url(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ip_url)
{
    ui->setupUi(this);
}

Ip_url::~Ip_url()
{
    delete ui;
}


void Ip_url::on_pushButton_clicked()
{
    ip_url=ui->lineEdit->text();
    button_url->setText("Camera: Ip");
    hide();
}
