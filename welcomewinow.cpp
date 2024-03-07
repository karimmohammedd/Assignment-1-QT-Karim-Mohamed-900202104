#include "welcomewinow.h"
#include "ui_welcomewinow.h"
#include "QPixmap"

WelcomeWinow::WelcomeWinow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WelcomeWinow)
{
    ui->setupUi(this); //picture is commented because the path is from MY desktop
    //QPixmap pix("/Users/karimmohamed/Desktop/International-Union-of-Cinemas-Calls-for-Open-Standards-in-the-Cinema-Industry.jpeg");
    //int w = ui->labelPic->width();
    //int h = ui->labelPic->height();
    //ui->labelPic->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));
}

WelcomeWinow::~WelcomeWinow()
{
    delete ui;
}

void WelcomeWinow::on_pushButtonLogout_clicked()
{
    this->close();
}
