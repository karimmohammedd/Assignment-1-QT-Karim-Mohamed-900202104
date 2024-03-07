#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonRegister_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
