#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"


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
    QString login = ui->login1->text();
    QString pass = ui->pass1->text();
    if(login == "Codi" && pass =="ttt"){
        QMessageBox::information(this, "Ура","Вы успешно вошли");

    }else{
        QMessageBox::warning(this, "Ура","Не получилось");
    }
}
