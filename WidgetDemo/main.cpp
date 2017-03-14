#include <QApplication>
#include "mainwindow.h"
//#include <QMainWindow>
//#include <QLabel>
//#include <QPushButton>
//#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
/*
    QMainWindow w;
    w.setWindowTitle("Widget演示"); // 设置标题
    w.resize(600, 150); // 设置客户区大小

    QLabel label("Hello", &w);
    label.setGeometry(0, 0, 150, 30);
    w.show();
*/

/*
    QLabel label("这是Label控件"); // 没有父对象
    label.setWindowTitle("Label作为顶级窗口");
    label.setGeometry(100, 50, 360, 160);
    label.setAlignment(Qt::AlignCenter);
    label.show();

    QPushButton btn; // 没有父对象
    btn.setWindowTitle("Button作为顶级窗口");
    btn.setText("这是按钮");
    btn.setGeometry(480, 50, 360, 160);
    btn.show();
*/

/*
    QMainWindow w;
    w.setWindowTitle("Widget工程");
    w.resize(325, 120);

    QLineEdit lineEdit(&w);
    lineEdit.setGeometry(30, 20, 180, 36);
    lineEdit.setPlaceholderText("Please input");

    QPushButton pushBtn("取消", &w);
    pushBtn.setGeometry(220, 20, 70, 36);

    QLabel label(&w);
    label.setGeometry(30, 70, 250, 30);

    // 连接clike()信号和quit()槽
//    QObject::connect(&pushBtn, SIGNAL(clicked()), &a, SLOT(quit()));
    QObject::connect(&pushBtn, &QPushButton::click, &a, &QApplication::quit);
    // 连接textChanged()信号和setText()槽
//    QObject::connect(&lineEdit,SIGNAL(textChanged(QString)), &label, SLOT(setText(QString)));
    QObject::connect(&lineEdit, &QLineEdit::textChanged, &label, &QLabel::setText);
    w.show();
*/

    MainWindow w;
    w.show();

    return a.exec();
}
