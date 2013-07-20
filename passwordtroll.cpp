#include "passwordtroll.h"
#include "ui_passwordtroll.h"

PasswordTroll::PasswordTroll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordTroll)
{
    ui->setupUi(this);
}

PasswordTroll::~PasswordTroll()
{
    delete ui;
}
