/*
Григоренко Дмитро комп.мех. 2 курс
Екзамінаційний білет № 26
*/
#pragma once
#include <iostream>
using namespace std;
class Complex
{
private: 
	double re, im;
public:
	Complex();
	Complex(double r);
	Complex(double r, double i);
	Complex(const Complex& c);
	~Complex();

	double abs();								// Модуль комплексного числа

	Complex& operator=(Complex& c);				// Оператор присваивания
	Complex& operator+=(Complex& c);			// Оператор +=
	Complex operator+(const Complex& c);		// Оператор +
	Complex operator-(const Complex& c);		// Оператор -
	Complex operator*(const Complex& c);		// Оператор множення
	Complex operator/(const Complex& c);		// Оператор ділення


	friend ostream& operator<< (ostream&, const Complex&);		// перегрузка оператора <<
	friend istream& operator>> (istream&, Complex&);			// перегрузка оператора >>

};

