#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

QVector<int> marcados;

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


void MainWindow::on_btn_adicionar_clicked()
{
    ui->listWidget->addItem(ui->txt_item->text());
    ui->txt_item->clear();
    ui->txt_item->setFocus();
}

void MainWindow::on_btn_adicionar_varios_clicked()
{
    QListWidgetItem *item1=new QListWidgetItem("C++");
    QListWidgetItem *item2=new QListWidgetItem("Qt Creator");
    QListWidgetItem *item3=new QListWidgetItem("HTML");
    QListWidgetItem *item4=new QListWidgetItem("CSS");
    QListWidgetItem *item5=new QListWidgetItem("Javascript");

    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
    ui->listWidget->addItem(item4);
    ui->listWidget->addItem(item5);


}

void MainWindow::on_btn_marcar_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::lightGray);
    ui->listWidget->currentItem()->setBackground(Qt::darkGreen);
    marcados.push_back(ui->listWidget->currentRow());
    qDebug() << "Marcados: " << marcados;
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::black);
    ui->listWidget->currentItem()->setBackground(Qt::white);
    marcados.erase(marcados.begin()+ui->listWidget->currentRow());
    qDebug() << "Marcados: " << marcados;
}

void MainWindow::on_pushButton_2_clicked()
{
    while(!marcados.empty()){
        ui->listWidget->setCurrentRow(marcados.last());
        ui->listWidget->currentItem()->setForeground(Qt::black);
        ui->listWidget->currentItem()->setBackground(Qt::white);

        marcados.last();
        marcados.pop_back();
    }
}
