#include "Person.h"
#include "windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Person t;
	cin >> t;
	cout << t;
	cout << "����� �� ϲ�: " <<endl;
	string name;
	cout << "������ �������, ��'�, �� �������: ";
	cin >> name;
	t.Search(name); // ���� name ����� ���� ��� ������� � ��'��� t ����� Person �� ���� ������ ��� ��'���;
	cout << "����� �� ����� ����������: " <<endl;
	Date tdate;
	cout << "������ ���� ����������: ";
	cin >> tdate.day;
	cout << "������ ����� ����������: ";
	cin >> tdate.month;
	cout << "������ �� ����������: ";
	cin >> tdate.years;
	t.Search(tdate); // ���� tDate ����� ���� ��� ������� � ��'��� t ����� Person �� ���� ������ ��� ��'���;
}