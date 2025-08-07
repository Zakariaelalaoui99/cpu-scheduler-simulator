#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Configura la ComboBox degli algoritmi
    ui->comboBox->addItem("...");
    ui->comboBox->addItem("FCFS");
    ui->comboBox->addItem("SJF");
    ui->comboBox->addItem("Round Robin");
    ui->comboBox->addItem("Round Robin with Priority");
    ui->comboBox->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}
