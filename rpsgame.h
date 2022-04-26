#ifndef RPSGAME_H
#define RPSGAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RPSGame; }
QT_END_NAMESPACE

class RPSGame : public QMainWindow
{
    Q_OBJECT

public:
    RPSGame(QWidget *parent = nullptr);
    ~RPSGame();

private slots:
    void on_rockButton_clicked();

    void on_paperButton_clicked();

    void on_scissorsButton_clicked();

private:
    Ui::RPSGame *ui;
};
#endif // RPSGAME_H
