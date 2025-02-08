#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "coin10.h"
#include "coin20.h"
#include "coin50.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool evaluateToss ( Coin * coin ) ;
    void addToBalance (const double &) ;
    double getBalance () const ;
    bool isWin () const ;
    void showCoinResult() ;
    void reset() ;
    void resetWin() ;
    void updatephoto() ;

private slots:
    void on_btn_toss_clicked();

private:
    Ui::MainWindow *ui;
    double balance ;
    int count ;
    QTimer *photoUpdateTimer ;
};
#endif // MAINWINDOW_H
