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
		os << "Прізвище автора: " << book.authorSecondName << endl;
		os << "Назва: " << book.bookName << endl;
		os << "Видавництво: " << book.publishingHouse << endl;
		os << "Рік видання: " << book.releaseYear << endl;
		os << "Кількість сторінок: " << book.pageCount << endl;
		return os;
	}

	friend istream& operator >> (istream& is, Book& book)
	{
		cout << "Введіть прізвище автора: ";
		getline(is, book.authorSecondName);
		cout << "Введіть назву книги: ";
		getline(is, book.bookName);
		cout << "Введіть видавництво: ";
		getline(is, book.publishingHouse);
		cout << "Введіть рік видання: ";
		while (!(is >> book.releaseYear) || book.releaseYear < 800 || book.releaseYear > 2022)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "Введіть правильно рік видання! Він не може бути нижче 800 або більше 2022!" << endl;
			cout << "Введіть рік видання: ";
		}
		cout << "Введіть кількість сторінок: ";
		while (!(is >> book.pageCount) || book.pageCount <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "Введіть правильно кількість сторінок! Кількість сторінок не може бути меншою або рівною 0!" << endl;
			cout << "Введіть кількість сторінок: ";
		}
		cin.get();
		return is;
	}

	~Book();
};

