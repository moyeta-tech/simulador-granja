#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Simulador de Granja");

    ui->tableWidget->setColumnCount(3);

    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Nombre" << "Tiempo" << "Estado");
}

MainWindow::~MainWindow()
{
    delete ui;
}
