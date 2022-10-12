#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string authorSecondName;
	string bookName;
	string publishingHouse;
	int releaseYear;
	int pageCount;

public:
	Book();

	void setAuthorSecondName(string tAuthorSecondName);
	void setBookName(string tBookName);
	void setPublishHouse(string tPublishHouse);
	void setReleaseYear(int tReleaseYear);
	void setPageCount(int tPageCount);
	string getAuthorSecondName();
	string getBookName();
	string getPublishHouse();
	int getReleaseYear();
	int getPageCount();

	friend ostream& operator <<(ostream& os, const Book& book)
	{
		os << "������� ������: " << book.authorSecondName << endl;
		os << "�����: " << book.bookName << endl;
		os << "�����������: " << book.publishingHouse << endl;
		os << "г� �������: " << book.releaseYear << endl;
		os << "ʳ������ �������: " << book.pageCount << endl;
		return os;
	}

	friend istream& operator >> (istream& is, Book& book)
	{
		cout << "������ ������� ������: ";
		getline(is, book.authorSecondName);
		cout << "������ ����� �����: ";
		getline(is, book.bookName);
		cout << "������ �����������: ";
		getline(is, book.publishingHouse);
		cout << "������ �� �������: ";
		while (!(is >> book.releaseYear) || book.releaseYear < 800 || book.releaseYear > 2022)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "������ ��������� �� �������! ³� �� ���� ���� ����� 800 ��� ����� 2022!" << endl;
			cout << "������ �� �������: ";
		}
		cout << "������ ������� �������: ";
		while (!(is >> book.pageCount) || book.pageCount <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "������ ��������� ������� �������! ʳ������ ������� �� ���� ���� ������ ��� ����� 0!" << endl;
			cout << "������ ������� �������: ";
		}
		cin.get();
		return is;
	}

	~Book();
};

