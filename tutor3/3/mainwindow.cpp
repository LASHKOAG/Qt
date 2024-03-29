#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::about(this,"Заголовок", "Просто текст внутри");
    //QMessageBox::critical(this,"Заголовок", "Просто текст внутри");
    //QMessageBox::information(this,"Заголовок", "Просто текст внутри");
    //QMessageBox::warning(this,"Заголовок", "Просто текст внутри");
    //QMessageBox::question(this,"Заголовок", "Просто текст внутри");
    QMessageBox::StandardButton reply = QMessageBox::question(this,"Заголовок", "Просто текст внутри", QMessageBox::Yes | QMessageBox::No);
    if(reply==QMessageBox::Yes){
        QApplication::quit();
    }else{
        qDebug()<<"кнопка нажата No";
    }
}
