#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wiringPi.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode(0, OUTPUT);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_pressed()
{
    digitalWrite(0, HIGH);
}

void MainWindow::on_pushButton_released()
{
    digitalWrite(0, LOW);
}
