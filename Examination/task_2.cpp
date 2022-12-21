/*
Григоренко Дмитро комп.мех. 2 курс
Екзамінаційний білет № 26
*/
#include "task_2.h"
/*
Отримати всі символи, розміщені
а) до першої двокрапки включно;
б) після першої двокрапки;
в) між першою і другою двокрапкою. Якщо другої двокрапки немає, то 
отримати всі символи, розміщені після єдиної двокрапки.
*/
using namespace std;
void task_2(string str)
{
	int first = str.find(':');
	int second = str.find(':', first+1);
	setlocale(LC_ALL, "rus");

	
	cout << "string = " << str << endl;
	if (first == -1)
	{
		cout << "Немає жодної двокрапки." << endl;
		cout << "========================" << endl;
		return;

	}
	
	cout << "a) " << str.substr(0, first + 1) << endl;
	cout << "б) " << str.substr(first+1) << endl;
	cout << "в) " << str.substr(first+1, second-first-1) << endl;
	cout << first << endl << second << endl;
	cout << "========================" << endl;
	
}
