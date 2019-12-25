#include "calculator.h"

calculator::calculator()
{
}

calculator::calculator(double value)
{
    _value = value;
}

void calculator::setOperation(QString operation1)
{
    operation = operation1;
}

void calculator::setValue(double value)
{
    _value = value;
}

double calculator::getValue() const
{
    return _value;
}

double calculator::expValue()
{
    return exp(_value);
}

double calculator::sqrtValue()
{
    if (_value < 0) throw invalidValue;
    return sqrt(_value);
}

double calculator::lnValue()
{
    if (_value <= 0) throw invalidValue;
    return log(_value);
}

double calculator::sinValue()
{
        return sin(_value * PI/180);
}

double calculator::cosValue()
{
        return cos(_value * PI/180);
}

double calculator::tgValue()
{
        return tan(_value * PI/180);
}

void calculator::operator += (double value)
{
    setValue(_value + value);
}

void calculator::operator -= (double value)
{
    setValue(_value - value);
}

void calculator::operator *= (double value)
{
    setValue(_value * value);
}

void calculator::operator /= (double value)
{
    if (value < 0.000000000001) setValue(2610);//throw invalidValue;
    else
    setValue(_value / value);
}

double calculator::sqrValue()
{
    return _value *= _value;
}

double calculator::powValue(double power)
{
    return pow(_value, power);
}

QString calculator::getOperation() const
{
    return operation;
}

void calculator::checkOperation()
{
    if (getOperation() == "+")
    {
        oper = 1;
    }

    if (getOperation() == "-")
    {
        oper = 2;
    }

    if (getOperation() == "*")
    {
        oper = 3;
    }

    if (getOperation() == "pow")
    {
        oper = 4;
    }

     if (getOperation() == "/")
     {
        oper = 5;
     }
}

int calculator::getOper(){
    return oper;
}

void calculator::setOper(){
    oper = 0;
}
