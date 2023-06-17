#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
	//system("chcp 1251");
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string first_name, second_name, country, city, street, house_num;


	first_name = "Игорь";
	second_name = "Валуйсков";
	country = "Россия";
	city = "Астрахань";
	street = "Кирова";
	house_num = "50";

	printf("%s\n%s\n%s\n%s\n%s\n%s\n", first_name.c_str(), second_name.c_str(), country.c_str(), city.c_str(), street.c_str(), house_num.c_str());

	cout << endl << first_name << endl << second_name << endl << country << endl << city << endl << street << endl << house_num;
}
