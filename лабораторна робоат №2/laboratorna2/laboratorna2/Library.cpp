#include "Library.h"

Library::Library()
{
	cout << "Введіть кількість книг: ";
	while (!(cin >> bookCount) == true || bookCount <= 0)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Кількість книг не може бути менше або рівне 0!" << endl;
		cout << "Введіть кількість книг: ";
	}
	cin.get();
	book = new Book[bookCount];
}

void Library::searchBySecondAuthorName()
{
	string temp;
	cout << "Пошук фільму за прізвищем автора.\nВведіть прізвище автора: ";
	cin >> temp;
	for (int i = 0; i < bookCount; i++)
	{
		if (temp == book[i].getAuthorSecondName())
		{
			cout << book[i] << endl;
		}
	}
}

void Library::searchByBookName()
{
	string tempName;
	cout << "Пошук фільму за назвою книги.\nВведіть назву: ";
	cin >> tempName;
	for (int i = 0; i < bookCount; i++)
	{
		if (tempName == book[i].getBookName())
		{
			cout << book[i] << endl;
		}
	}
}

void Library::searchByPublishingHouse()
{
	string tempPubHouse;
	cout << "Пошук фільму за видавцем.\nВведіть видавця: ";
	cin >> tempPubHouse;
	for (int i = 0; i < bookCount; i++)
	{
		if (tempPubHouse == book[i].getPublishHouse())
		{
			cout << book[i] << endl;
		}
	}
}

void Library::searchByReleaseYear()
{
	int tempYear;
	cout << "Пошук фільму за роком видання.\nВведіть рік видання: ";
	cin >> tempYear;
	for (int i = 0; i < bookCount; i++)
	{
		if (tempYear == book[i].getReleaseYear())
		{
			cout << book[i] << endl;
		}
	}
}