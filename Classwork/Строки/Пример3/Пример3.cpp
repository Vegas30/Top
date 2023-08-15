// Пример3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
using namespace std;

const int n = 15;

const char* month_name(int k)
{
	static const char* name[] =
	{
		"none", "January",
		"February","March","April",
		"May","June","July","Aurust",
		"September", "October", "November",
		"December"
	};
	return (k < 1 || k>12) ? name[0] : name[k];
}

 int main()
{
	//char* month_name(int);
	/*-----------------*/
	for (int i = 0; i < n; i++)
		cout << "Month number " << i << " - " << month_name(i) << "\n";
}
/*--------------------------------------------------------------------*/