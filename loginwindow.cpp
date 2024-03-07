#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewinow.h"
#include "ui_welcomewinow.h"
#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QMessageBox>
#include <QPixmap>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButtonLogin_clicked()
{
    QString username = ui->lineEditUsername->text(); // Access the username QLineEdit
    QString password = ui->lineEditPassword->text(); // Access the password QLineEdit

    if (username == "Karim" && password == "Pass") {
        // Login is successful

        QMessageBox::information(this, "Login Success", "You are now logged in.");

        this->hide();

        WelcomeWinow *welcomewindow = new WelcomeWinow(this);
        welcomewindow->show();
        }

    else {
        QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
    }
}

void LoginWindow::on_pushButtonRegister_clicked()
{
    this->close();
    RegisterWindow *registerwindow = new RegisterWindow(this);
    registerwindow->show();
}
