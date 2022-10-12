#include "Library.h"
#include "windows.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Library lLibrary;
	cin >> lLibrary;
	cout << "----------------------------------------------------------" << endl;
	cout << lLibrary;
	cout << "----------------------------------------------------------" << endl;
	lLibrary.searchBySecondAuthorName();
	cout << "----------------------------------------------------------" << endl;
	lLibrary.searchByBookName();
	cout << "----------------------------------------------------------" << endl;
	lLibrary.searchByPublishingHouse();
	cout << "----------------------------------------------------------" << endl;
	lLibrary.searchByReleaseYear();
	cout << "----------------------------------------------------------" << endl;
	return 0;
}