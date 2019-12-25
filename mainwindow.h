#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_clear_clicked();//очистить поле
    void on_pushButton_erase_clicked();//стереть последний символ
    void on_pushButton_dot_clicked();// точка
    void on_pushButton_sign_clicked();// смена знака
    void on_pushButton_plus_clicked();// плюс
    void on_pushButton_equally_clicked();// равно
    void on_pushButton_minus_clicked();// минус
    void on_pushButton_mult_clicked();//умножение
    void on_pushButton_division_clicked();//деление
    void on_pushButton_exp_clicked();// экспонента
    void on_pushButton_ln_clicked();// натуральный логарифм
    void on_pushButton_sqrt_clicked();//квадратный корень
    void on_pushButton_x2_clicked();// возведение в квадрат
    void on_pushButton_sin_clicked();//синус
    void on_pushButton_cos_clicked();//косинус
    void on_pushButton_tan_clicked();//тангенс
    void on_pushButton_pow_clicked();//возведение в n степень

private:
    Ui::MainWindow *ui;
    calculator num; // переменная для вычислений
    bool flag = 0, // флаг, занесение символов в label
         exep=false; // для исключений
       /*  oper = 0;*/
    void addLabel(QPushButton *button, QLabel *label); // функция добавления текста на экран
    //void checkOperation(); //проверяет какая операция выполнялась последней
};
#endif // MAINWINDOW_H
