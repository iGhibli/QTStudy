#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
public slots:
    void showText(); // 声明槽函数
private:
    QLineEdit *lineEdit;
    QPushButton *btn;
    QLabel *label;
};

#endif // MAINWINDOW_H
