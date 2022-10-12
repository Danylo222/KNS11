#include "Book.h"

// constructor
Book::Book()
{
	authorSecondName = "Unknown";
	bookName = "Nameless";
	publishingHouse = "Unknown";
	releaseYear = 800;
	pageCount = 1;
}

// setters
void Book::setAuthorSecondName(string tAuthorSecondName) 
{
	authorSecondName = tAuthorSecondName;
}

void Book::setBookName(string tBookName)
{
	bookName = tBookName;
}

void Book::setPublishHouse(string tPublishHouse)
{
	publishingHouse = tPublishHouse;
}

void Book::setReleaseYear(int tReleaseYear)
{
	if (tReleaseYear < 800 || tReleaseYear > 2022)
	{
		cout << "Рік видавництва не може бути нижче 800 або більше 2022!" << endl;
	}
	else
	{
		releaseYear = tReleaseYear;
	}
}

void Book::setPageCount(int tPageCount)
{
	if (tPageCount <= 0)
	{
		cout << "Кількість сторінок не може бути меншою або рівною 0!" << endl;
	}
	else
	{
		pageCount = tPageCount;
	}
}

// getters
string Book::getAuthorSecondName()
{
	return authorSecondName;
}

string Book::getBookName()
{
	return bookName;
}

string Book::getPublishHouse()
{
	return publishingHouse;
}

int Book::getReleaseYear()
{
	return releaseYear;
}

int Book::getPageCount()
{
	return pageCount;
}

// destructor
Book::~Book()
{

}