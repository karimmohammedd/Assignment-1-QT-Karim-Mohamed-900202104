#ifndef WELCOMEWINOW_H
#define WELCOMEWINOW_H

#include <QDialog>

namespace Ui {
class WelcomeWinow;
}

class WelcomeWinow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWinow(QWidget *parent = 0);
    ~WelcomeWinow();

private slots:
    void on_pushButtonLogout_clicked();

private:
    Ui::WelcomeWinow *ui;
};

#endif // WELCOMEWINOW_H
