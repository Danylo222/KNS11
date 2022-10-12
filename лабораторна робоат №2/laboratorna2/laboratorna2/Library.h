#pragma once
#include "Book.h"

class Library
{
private:
	int bookCount;
	Book* book;

public:
	Library();

	void searchBySecondAuthorName();
	void searchByBookName();
	void searchByPublishingHouse();
	void searchByReleaseYear();

	~Library()
	{
		delete[]book;
	}

	friend ostream& operator <<(ostream& os, const Library& library)
	{
		for (int i = 0; i < library.bookCount; i++)
		{
			os << library.book[i] << endl;
		}
		return os;
	}

	friend istream& operator >>(istream& is, Library& library)
	{
		for (int i = 0; i < library.bookCount; i++)
		{
			is >> library.book[i];
			cout << endl;
		}
		return is;
	}

};

