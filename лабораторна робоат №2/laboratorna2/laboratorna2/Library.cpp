#include "Library.h"

Library::Library()
{
	cout << "������ ������� ����: ";
	while (!(cin >> bookCount) == true || bookCount <= 0)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "ʳ������ ���� �� ���� ���� ����� ��� ���� 0!" << endl;
		cout << "������ ������� ����: ";
	}
	cin.get();
	book = new Book[bookCount];
}

void Library::searchBySecondAuthorName()
{
	string temp;
	cout << "����� ������ �� �������� ������.\n������ ������� ������: ";
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
	cout << "����� ������ �� ������ �����.\n������ �����: ";
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
	cout << "����� ������ �� ��������.\n������ �������: ";
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
	cout << "����� ������ �� ����� �������.\n������ �� �������: ";
	cin >> tempYear;
	for (int i = 0; i < bookCount; i++)
	{
		if (tempYear == book[i].getReleaseYear())
		{
			cout << book[i] << endl;
		}
	}
}