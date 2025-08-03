#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->runButton, &QPushButton::clicked, this, &MainWindow::runSimulation);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::runSimulation()
{
    QString inputFile = QFileDialog::getOpenFileName(this, "Select Input File");
    if (inputFile.isEmpty()) return;

    QProcess process;
    process.start("./scheduler_sim", QStringList() << inputFile);
    process.waitForFinished();

    QString output = process.readAllStandardOutput();
    ui->outputBox->setPlainText(output);
}

