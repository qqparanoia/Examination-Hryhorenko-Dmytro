/*
���������� ������ ����.���. 2 ����
������������� ���� � 26
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

	double abs();								// ������ ������������ �����

	Complex& operator=(Complex& c);				// �������� ������������
	Complex& operator+=(Complex& c);			// �������� +=
	Complex operator+(const Complex& c);		// �������� +
	Complex operator-(const Complex& c);		// �������� -
	Complex operator*(const Complex& c);		// �������� ��������
	Complex operator/(const Complex& c);		// �������� ������


	friend ostream& operator<< (ostream&, const Complex&);		// ���������� ��������� <<
	friend istream& operator>> (istream&, Complex&);			// ���������� ��������� >>

};

