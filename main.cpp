#include "passwordtroll.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PasswordTroll w;
    w.show();
    
    return a.exec();
}
