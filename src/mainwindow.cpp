#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for (int i = 0; i < 1000; i++)
    {
        QListWidgetItem* item = new QListWidgetItem();
        item->setSizeHint(QSize(320, 320));
        ui->lvData->addItem(item);
        FaceWidget* w = new FaceWidget(ui->lvData);
        ui->lvData->setItemWidget(item, w);
        QThread::msleep(50);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

