/*
���������� ������ ����.���. 2 ����
������������� ���� � 26
*/
#include "task_2.h"
/*
�������� �� �������, �������
�) �� ����� ��������� �������;
�) ���� ����� ���������;
�) �� ������ � ������ ����������. ���� ����� ��������� ����, �� 
�������� �� �������, ������� ���� ����� ���������.
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
		cout << "���� ����� ���������." << endl;
		cout << "========================" << endl;
		return;

	}
	
	cout << "a) " << str.substr(0, first + 1) << endl;
	cout << "�) " << str.substr(first+1) << endl;
	cout << "�) " << str.substr(first+1, second-first-1) << endl;
	cout << first << endl << second << endl;
	cout << "========================" << endl;
	
}
