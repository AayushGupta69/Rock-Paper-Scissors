#include "rpsgame.h"

#include <QApplication>

int user_choice;
int computer_choice;
int user_score = 0;
int computer_score = 0;
int result;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RPSGame w;
    w.show();
    return a.exec();
}
