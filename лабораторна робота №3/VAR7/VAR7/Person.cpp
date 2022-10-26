#include "Person.h"


Person::Person() 
{ 
	fullName = gender = "Uknown";
	date.day = date.month = date.years = 0; 
}
void Person::Search(string tName)
{
	if (fullName == tName)
	{
		cout << *this;
	}
}
void Person::Search(Date tDate)
{
	if (date.day == tDate.day && date.month == tDate.month && date.years == tDate.years)
	{
		cout << *this;
	}
}