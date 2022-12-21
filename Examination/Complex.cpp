/*
Григоренко Дмитро комп.мех. 2 курс
Екзамінаційний білет № 26
*/
#include "Complex.h"
#include <iostream>
#include <cmath>

Complex::Complex()
{
}

Complex::Complex(double r)
{
    re = r;
    im = 0;
}

Complex::Complex(double r, double i)
{
    re = r;
    im = i;
}

Complex::Complex(const Complex& c)
{
    re = c.re;
    im = c.im;
}

Complex::~Complex()
{
}

double Complex::abs()
{
    return sqrt(re * re + im * im);
}


Complex& Complex::operator = (Complex& c)
{
    re = c.re;
    im = c.im;

    return (*this);
}

Complex& Complex::operator += (Complex& c)
{
    re += c.re;
    im += c.im;
    return *this;
}

Complex Complex::operator + (const Complex& c)
{
    return Complex(re + c.re, im + c.im);
}

Complex Complex::operator - (const Complex& c)
{
    return Complex(re - c.re, im - c.im);
}

Complex Complex::operator * (const Complex& c)
{
    return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
}

Complex Complex::operator / (const Complex& c)
{
    Complex temp;

    double r = c.re * c.re + c.im * c.im;
    temp.re = (re * c.re + im * c.im) / r;
    temp.im = (im * c.re - re * c.im) / r;

    return temp;
}

ostream& operator<<(ostream& out, const Complex& c)
{
    out << "(" << c.re << ", " << c.im << ")";
    return out;
}

istream& operator>>(istream& in, Complex& c)
{
    in >> c.re >> c.im;
    return in;
}
