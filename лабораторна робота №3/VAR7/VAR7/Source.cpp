#include "Person.h"
#include "windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Person t;
	cin >> t;
	cout << t;
	cout << "Пошук за ПІБ: " <<endl;
	string name;
	cout << "Введіть Прізвище, Ім'я, По батькові: ";
	cin >> name;
	t.Search(name); // якщо name такеж саме яке записав у об'єкт t класу Person то воно виведе цей об'єкт;
	cout << "Пошук за датою народження: " <<endl;
	Date tdate;
	cout << "Введіть день народження: ";
	cin >> tdate.day;
	cout << "Введіть місяць народження: ";
	cin >> tdate.month;
	cout << "Введіть рік народження: ";
	cin >> tdate.years;
	t.Search(tdate); // якщо tDate такеж саме яке записав у об'єкт t класу Person то воно виведе цей об'єкт;
}