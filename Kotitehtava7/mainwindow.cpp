#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;                                                      // kasvattaa counterin arvoa yhdellä
    QString s = QString::number(counter);                           // muutetaan counterin arvo QString:ksi
    ui->txtResult->setText(s);                                      // kirjoitetaan lineEdit:n counterin arvo
    ui->labelInfo->setText("Painiketta painettu "+s+" kertaa");     // kirjoitetaan label:n teksti uudella counterin arvolla

}


void MainWindow::on_btnReset_clicked()
{
    counter=0;                                                      // asetaan counterin arvoksi 0
    QString s = QString::number(counter);                           // muutetaan counterin arvo QString:ksi
    ui->txtResult->setText(s);                                      // kirjoitetaan lineEdit:n nollattu counterin arvo
    ui->labelInfo->setText("Painiketta painettu "+s+" kertaa");     // kirjoitetaan label:n teksti nollatulla counterin arvolla
}

