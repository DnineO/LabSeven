#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <math.h>
#include <QString>

#define PI 3.14

enum exeption {invalidValue};

class calculator
{   QString _s = ""; // stores entered number in QString
    unsigned oper = 0;
    double _value; // значение
    QString operation; //операция
public:
    calculator(); //конструктор
    calculator(double value); // конструктор с параметром
    void setOperation(QString operation1);//уст. операцию
    void setValue(double value); // задать значение
    double getValue() const; // получить значение
    double expValue(); // exp
    double sqrtValue(); // корень
    double lnValue(); // натуральный логарифм
    double sinValue(); // sin в градусах
    double cosValue(); // cos в градусах
    double tgValue(); // tg в градусах
    void operator += (double value); // Оператор сложения
    void operator -= (double value); // Оператор вычитания
    void operator *= (double value); // Оператор умножения
    void operator /= (double value); // Оператор деления
    double sqrValue(); // Возведение в квадрат
    double powValue(double power); // Возведение в степень
    QString getOperation() const; //последняя выполненная операция
    int getOper();
    void setOper();
    void checkOperation();
    void setStr(QString str);
    QString getStr();
};

#endif // CALCULATOR_H
