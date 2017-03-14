#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Widget Project");
    this->resize(325, 120);

    lineEdit = new QLineEdit(this);
    lineEdit->setGeometry(30, 20, 180, 36);
    lineEdit->setPlaceholderText("Please input text");

    btn = new QPushButton("Show", this);
    btn->setGeometry(220, 20, 70, 36);

    label = new QLabel(this);
    label->setGeometry(30, 70, 250, 30);

    QObject::connect(btn, SIGNAL(clicked()), this, SLOT(showText()));
}

// 实现槽函数
void MainWindow::showText(){
    label->setText(lineEdit->text());
}
