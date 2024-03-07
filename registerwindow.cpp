#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QMessageBox>
#include <QDialog>
#include <QDate>

RegisterWindow::RegisterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_pushButton_clicked()
{

}

void RegisterWindow::on_pushButtonregister_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();
    QString rePassword = ui->lineEditRePassword->text();

    int day = ui->lineEditDay->text().toInt();
    int year = ui->lineEditYear->text().toInt();
    int month = ui->comboBoxMonth->currentIndex() + 1; // Assuming January is at index 0

    QDate dob(year, month, day);
    int age = QDate::currentDate().year() - dob.year() - (QDate::currentDate().dayOfYear() < dob.dayOfYear());

    if(username.isEmpty() || password.isEmpty() || rePassword.isEmpty() || day == 0 || year == 0 || month == 0) {
    QMessageBox::warning(this, "Incomplete Form", "Please fill all the fields.");
    return;
    }

    if(age < 12) {
        QMessageBox::warning(this, "Age Requirement", "You must be at least 12 years old to register.");
        return;
    }

    if(username == "Karim" || password == "Pass") {
        QMessageBox::warning(this, "Invalid Credentials", "Username 'Karim' and password 'Pass' are not allowed.");
        return;
    }

    if(!ui->checkBoxAction->isChecked() && !ui->checkBoxDrama->isChecked() && !ui->checkBoxComdey->isChecked() &&
        !ui->checkBoxHorror->isChecked() && !ui->checkBoxRomance->isChecked() && !ui->checkBoxOther->isChecked()) {
        QMessageBox::warning(this, "Genre Selection", "Please select at least one favorite genre.");
        return;
    }

    if(password != rePassword) {
        QMessageBox::warning(this, "Password Mismatch", "The passwords do not match.");
        return;
    }

    QMessageBox::information(this, "Registration Successful", "You have been successfully registered.");

    QMessageBox::information(this, "Successfully Registered", "You are now registered.");
    this->close();
}
