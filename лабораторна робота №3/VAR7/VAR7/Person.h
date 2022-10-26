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
	void Search(string tName); // ����� ������
	void Search(Date tDate); // �������������� ����� ������
	friend ostream& operator<<(ostream& os, const Person& temp) // �������������� ��������� ������ (<<) (ostream �� ���� ������ � �������� iostream)
	{
		os << "�������, ��'�, �� �������: " << temp.fullName << endl;
		os << "�����: " << temp.gender << endl;
		os << "���� ����������: " << temp.date.day << "/" << temp.date.month << "/" << temp.date.years << endl;
		return os;
	}
	friend istream& operator >>(istream& is, Person& temp) // �������������� ��������� ����� (>>) (istream �� ���� ����� � �������� iostream)
	{
		cout << "������ �������, ��'�, �� �������: ";
		is >> temp.fullName;
		cout << "������ �����: ";
		is >> temp.gender;
		cout << "������ ���� ����������: ";
		try 
		{
			is >> temp.date.day;
			if (is.fail()) // ���� ������ ����� ������� ����� �� ���������� ��� ���� ���� � ��� �������� � catch (bool t). is.fail()  �������, �� ��������� ������� �������� � �������� ��������� � �����.
			{
				throw(true); // throw ������ ���������� ���� bool ����� ��� ���� � ���� day ������ ����� �������� ����� ��� �������
			}
			else if (temp.date.day > 31 || temp.date.day < 1) // ���� � ���� ���� ������� ����� ����� 31 ��� ������ 1 �� ���������� ��� ���� ���� � ��� �������� � catch (int a)
			{
				throw(temp.date.day); // throw ������ ���������� ���� int ����� ��� ���� � ���� ���� ������� ����� ����� 31 ��� ������ 1
			}
		}
		catch (int a)
		{
			cout << "���� �� ����� ������� ������: " << a << endl;
			exit(-1);
		}
		catch (bool)
		{
			cout << "������� ������� ��� ����� � ����� ����!";
			exit(-1);
		}
		cout << "������ ����� ����������: ";	
		try
		{
			is >> temp.date.month;
			if (is.fail()) // ���� ������ ����� ������� ����� �� ���������� ��� ���� ���� � ��� �������� � catch (bool t). is.fail()  �������, �� ��������� ������� �������� � �������� ��������� � �����.
			{
				throw(true); // throw ������ ���������� ���� bool ����� ��� ���� � ���� month ������ ����� �������� ����� ��� �������
			}
			else if (temp.date.month > 12 || temp.date.month < 1) // ���� � ���� ����� ������� ����� ����� 12 ��� ������ 1 �� ���������� ��� ���� ���� � ��� �������� � catch (int a)
			{
				throw(temp.date.month); // throw ������ ���������� ���� int ����� ��� ���� � ���� ����� ������� ����� ����� 12 ��� ������ 1
			}
		}
		catch (int a)
		{
			cout << "̳���� �� ����� ������� ������: " << a << endl;
			exit(-1);
		}
		catch (bool)
		{
			cout << "������� ������� ��� ����� � ����� �����!";
			exit(-1);
		}
		cout << "������ �� ����������: ";
		try
		{
			is >> temp.date.years;
			if (is.fail()) // ���� ������ ����� ������� ����� �� ���������� ��� ���� ���� � ��� �������� � catch (bool t). is.fail()  �������, �� ��������� ������� �������� � �������� ��������� � �����.
			{
				throw(true); // throw ������ ���������� ���� bool ����� ��� ���� � ���� years ������ ����� �������� ����� ��� �������
			}
			else if (temp.date.years > 2022 || temp.date.years < 1900) // ���� � ���� �� ���������� ������� ����� ����� 2022 ��� ������ 1900 �� ���������� ��� ���� ���� � ��� �������� � catch (int a)
			{
				throw(temp.date.years); // throw ������ ���������� ���� int ����� ��� ���� � ���� �� ���������� ������� ����� ����� 2022 ��� ������ 1900
			}
		}
		catch (int a)
		{
			cout << "г� ���������� �� ����� ������� ������: " << a << endl;
			exit(-1);
		}
		catch (bool)
		{
			cout << "������� ������� ��� ����� � ����� �� ����������!";
			exit(-1);
		}
		return is;
	}
};

