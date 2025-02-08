#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    ui->setupUi(this);
    QPixmap Head50 ("/Users/macbook/Desktop/CoinTossGame/50da.png") ;
    ui->Coin50->setPixmap(Head50) ;
    QPixmap Head20 ("/Users/macbook/Desktop/CoinTossGame/20da.png") ;
    ui->Coin20->setPixmap(Head20) ;
    QPixmap Head10 ("/Users/macbook/Desktop/CoinTossGame/10da.png") ;
    ui->Coin10->setPixmap(Head10) ;
    ui->Balance->setText("0.00 DA") ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow :: evaluateToss ( Coin * coin ) {
    if (coin->toss()) {
        addToBalance(coin->getValue()) ;
        return true ;
    }
    return false ;
}

void MainWindow :: addToBalance (const double & da ) {
    this->balance += da ;
}

double MainWindow :: getBalance () const  {
    return balance ;
}

bool MainWindow :: isWin () const  {
    if (balance == 100.00 ) {
        return true ;
    }
    return false ;
}

void MainWindow::on_btn_toss_clicked()
{
    count = 0 ;
    ui->btn_toss->setEnabled(false) ;
    QTimer::singleShot(5000 , this , &MainWindow::showCoinResult) ;
    photoUpdateTimer = new QTimer(this);
    connect(photoUpdateTimer, &QTimer::timeout, this, &MainWindow::updatephoto);
    photoUpdateTimer->start(500); // S
}

void MainWindow :: showCoinResult() {
    photoUpdateTimer->stop() ;
    QPixmap Head10 ("/Users/macbook/Desktop/CoinTossGame/10da.png") ;
    QPixmap Tail10 ("/Users/macbook/Desktop/CoinTossGame/10daTail.png") ;
    QPixmap Head50 ("/Users/macbook/Desktop/CoinTossGame/50da.png") ;
    QPixmap Tail50 ("/Users/macbook/Desktop/CoinTossGame/50daTail.png") ;
    QPixmap Head20 ("/Users/macbook/Desktop/CoinTossGame/20da.png") ;
    QPixmap Tail20 ("/Users/macbook/Desktop/CoinTossGame/20daTail.png") ;
    Coin * coin1 = new Coin10 ; // the base class pointer to the derived class Coin10
    Coin * coin2 = new Coin20 ; // the base class pointer to the derived class Coin20
    Coin * coin3 = new Coin50 ; // the base class pointer to the derived class Coin50
    if (evaluateToss(coin1)) {
        ui->Coin10->setPixmap(Head10) ;
        ui->Result10->setText("+10") ;
    } else {
        ui->Coin10->setPixmap(Tail10) ;
        ui->NULL10->setText("NULL") ;
    }
    if (evaluateToss(coin2)) {
        ui->Coin20->setPixmap(Head20) ;
        ui->Result20->setText("+20") ;
    } else {
        ui->Coin20->setPixmap(Tail20) ;
        ui->NULL20->setText("NULL") ;
    }
    if (evaluateToss(coin3)) {
        ui->Coin50->setPixmap(Head50) ;
        ui->Result50->setText("+50") ;
    } else {
        ui->Coin50->setPixmap(Tail50) ;
        ui->NULL50->setText("NULL") ;
    }
    double newBalance ;
    newBalance = getBalance() ;
    QString Balance = QString::number(newBalance) + ".00 DA" ;
    ui->Balance->setText(Balance) ;
    if (getBalance() < 100.00) {
        QTimer::singleShot(5000 , this , &MainWindow::reset) ;
    } else {
        if (isWin()) {
            ui->Win->setText("YOU WON") ;
        } else {
            ui->Loss->setText("YOU LOST") ;
        }
        QTimer::singleShot(5000 , this , &MainWindow::resetWin) ;
    }

}

void MainWindow :: reset () {
    QPixmap Head10 ("/Users/macbook/Desktop/CoinTossGame/10da.png") ; // we set again the original photos
    QPixmap Head50 ("/Users/macbook/Desktop/CoinTossGame/50da.png") ;
    QPixmap Head20 ("/Users/macbook/Desktop/CoinTossGame/20da.png") ;
    ui->Coin10->setPixmap(Head10) ; // we set again the defaults text
    ui->Coin20->setPixmap(Head20) ;
    ui->Coin50->setPixmap(Head50) ;
    ui->Result10->setText("") ;
    ui->Result20->setText("") ;
    ui->Result50->setText("") ;
    ui->NULL10->setText("") ;
    ui->NULL20->setText("") ;
    ui->NULL50->setText("") ;
    ui->btn_toss->setEnabled(true) ;
}

void MainWindow :: resetWin () {
    reset() ;
    ui->Win->setText("") ;
    ui->Loss->setText("") ;
    addToBalance(-getBalance()) ; // reset the balance to 0.00 DA
    ui->Balance->setText ("0.00 DA") ;
}

void MainWindow :: updatephoto() {
     count ++ ;
    QPixmap Head10 ("/Users/macbook/Desktop/CoinTossGame/10da.png") ;
    QPixmap Tail10 ("/Users/macbook/Desktop/CoinTossGame/10daTail.png") ;
    QPixmap Head50 ("/Users/macbook/Desktop/CoinTossGame/50da.png") ;
    QPixmap Tail50 ("/Users/macbook/Desktop/CoinTossGame/50daTail.png") ;
    QPixmap Head20 ("/Users/macbook/Desktop/CoinTossGame/20da.png") ;
    QPixmap Tail20 ("/Users/macbook/Desktop/CoinTossGame/20daTail.png") ;
    if (count % 2 == 0) {
        ui->Coin10->setPixmap(Head10) ;
        ui->Coin20->setPixmap(Head20) ;
        ui->Coin50->setPixmap(Head50) ;
    } else {
        ui->Coin10->setPixmap(Tail10) ;
        ui->Coin20->setPixmap(Tail20) ;
        ui->Coin50->setPixmap(Tail50) ;
    }
}
