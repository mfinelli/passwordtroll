#ifndef PASSWORDTROLL_H
#define PASSWORDTROLL_H

#include <QMainWindow>

namespace Ui {
class PasswordTroll;
}

class PasswordTroll : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PasswordTroll(QWidget *parent = 0);
    ~PasswordTroll();
    
private:
    Ui::PasswordTroll *ui;
};

#endif // PASSWORDTROLL_H
