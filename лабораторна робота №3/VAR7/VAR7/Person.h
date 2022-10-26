#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Date 
{
	int day;
	int month;
	int years;
};

class Person
{
private:
	string fullName;
	string gender;
	Date date;
public:
	Person();
	~Person() {}
	void Search(string tName); // метод пошуку
	void Search(Date tDate); // перевантажений метод пошуку
	friend ostream& operator<<(ostream& os, const Person& temp) // перевантаження оператору виводу (<<) (ostream це клас виводу у бібліотеці iostream)
	{
		os << "Прізвище, Ім'я, По батькові: " << temp.fullName << endl;
		os << "Стать: " << temp.gender << endl;
		os << "Дата народження: " << temp.date.day << "/" << temp.date.month << "/" << temp.date.years << endl;
		return os;
	}
	friend istream& operator >>(istream& is, Person& temp) // перевантаження оператору вводу (>>) (istream це клас вводу у бібліотеці iostream)
	{
		cout << "Введіть Прізвище, Ім'я, По батькові: ";
		is >> temp.fullName;
		cout << "Введіть стать: ";
		is >> temp.gender;
		cout << "Введіть день народження: ";
		try 
		{
			is >> temp.date.day;
			if (is.fail()) // якщо замість числа введено букви то виконується цей блок коду і нас перекидає в catch (bool t). is.fail()  виявляє, чи вписується введене значення в значення визначене в змінній.
			{
				throw(true); // throw генерує виключення типу bool тільки тоді коли в зміну day замість числа записано літери або символи
			}
			else if (temp.date.day > 31 || temp.date.day < 1) // якщо в зміну день вказано число більше 31 або меньше 1 то виконується цей блок коду і нас перекидає в catch (int a)
			{
				throw(temp.date.day); // throw генерує виключення типу int тільки тоді коли в зміну день вказано число більше 31 або меньше 1
			}
		}
		catch (int a)
		{
			cout << "День не можна вказати числом: " << a << endl;
			exit(-1);
		}
		catch (bool)
		{
			cout << "Введено невірний тип даних у змінну день!";
			exit(-1);
		}
		cout << "Введіть місяць народження: ";	
		try
		{
			is >> temp.date.month;
			if (is.fail()) // якщо замість числа введено букви то виконується цей блок коду і нас перекидає в catch (bool t). is.fail()  виявляє, чи вписується введене значення в значення визначене в змінній.
			{
				throw(true); // throw генерує виключення типу bool тільки тоді коли в зміну month замість числа записано літери або символи
			}
			else if (temp.date.month > 12 || temp.date.month < 1) // якщо в зміну місяць вказано число більше 12 або меньше 1 то виконується цей блок коду і нас перекидає в catch (int a)
			{
				throw(temp.date.month); // throw генерує виключення типу int тільки тоді коли в зміну місяць вказано число більше 12 або меньше 1
			}
		}
		catch (int a)
		{
			cout << "Місяць не можна вказати числом: " << a << endl;
			exit(-1);
		}
		catch (bool)
		{
			cout << "Введено невірний тип даних у змінну місяць!";
			exit(-1);
		}
		cout << "Введіть рік народження: ";
		try
		{
			is >> temp.date.years;
			if (is.fail()) // якщо замість числа введено букви то виконується цей блок коду і нас перекидає в catch (bool t). is.fail()  виявляє, чи вписується введене значення в значення визначене в змінній.
			{
				throw(true); // throw генерує виключення типу bool тільки тоді коли в зміну years замість числа записано літери або символи
			}
			else if (temp.date.years > 2022 || temp.date.years < 1900) // якщо в зміну рік народження вказано число більше 2022 або меньше 1900 то виконується цей блок коду і нас перекидає в catch (int a)
			{
				throw(temp.date.years); // throw генерує виключення типу int тільки тоді коли в зміну рік народження вказано число більше 2022 або меньше 1900
			}
		}
		catch (int a)
		{
			cout << "Рік народження не можна вказати числом: " << a << endl;
			exit(-1);
		}
		catch (bool)
		{
			cout << "Введено невірний тип даних у змінну рік народження!";
			exit(-1);
		}
		return is;
	}
};

