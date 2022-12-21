/*
Григоренко Дмитро комп.мех. 2 курс 
Екзамінаційний білет № 26
*/

#include <iostream>
#include "Complex.h"
#include "task_2.h"
using namespace std;

void test_task1()
{
	cout << "========================\nТести першого завдання.\n========================\n";
	Complex a(1, 9);
	Complex b(2, -3);

	cout << "a = " << a << "; b =" << b << endl;

	a += b;

	cout << "a = " << a << "; b =" << b << endl;

	Complex c = a + b;

	cout << c << endl;
	cout << a + b << endl;
	cout << a * b << endl;
}

void test_task2()
{
	cout << "========================\nТести другого завдання.\n========================\n";
	string s1 = "1234:qwer:asdf";
	string s2 = "1234:qwerasdf";
	string s3 = "1234qwerasdf";
	task_2(s1);
	task_2(s2);
	task_2(s3);
}

int main()
{
	setlocale(LC_ALL, "rus");

	test_task1();
	
	test_task2();

	return 0;
}