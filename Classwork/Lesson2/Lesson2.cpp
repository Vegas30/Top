#include <Windows.h>

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);

	////float a = 3.47f;
	////double b;
	////b = 1.7976931348623158e+308;
	////cout << b << endl;

	////double c;
	////c = 3.4E+008;
	////cout << c << endl;

	////cout << "Привет" << endl;

	//cout << "-------------------------------------------------\n";
	//// инициализация
	//int DaysIn_2000Year = 366;
	//int HoursInDay = 24;
	//// действия
	//int HoursIn_2000Year = DaysIn_2000Year * HoursInDay;
	//// вывод

	//cout << "Количесво дней: " << DaysIn_2000Year << endl;
	//cout << "Количество часов: " << HoursInDay << endl;
	//cout << "Количество часов в году: " << HoursIn_2000Year << endl;
	//cout << "_________________________________________________\n";

	//int num = 0;
	//cout << "int: " << sizeof(int) << endl;
	//cout << "long: " << sizeof(long) << endl;
	//cout << "long long: " << sizeof(long long) << endl;
	//cout << "double: " << sizeof(double) << endl;
	//cout << "long double: " << sizeof(long double) << endl;

	//const int COUNT = 5;
	//const int PRICE = 35;

	//int total_price = COUNT * PRICE;

	//bool flag = true;
	//bool active = false;

	//cout << flag << endl;
	//cout << active << endl;


	string first_name, last_name, country, city, street, num_house;
	//first_name = "Игорь";
	//last_name = "Валуйсков";
	//country = "Россия";
	//city = "Астрахань";
	//street = "Кирова";
	//num_house = "15";



	cout << "Имя: " << first_name << endl;
	cout << "Фамилия: " << last_name << endl;
	cout << "Страна: " << country << endl;
	cout << "Город: " << city << endl;
	cout << "Улица: " << street << endl;
	cout << "Номер дома: " << num_house << endl;

	cout << "Введите имя: ";
	cin >> first_name;

	cout << endl << "Введите фамилию: ";
	cin >> last_name;

	cout << "Привет, " << first_name << " " << last_name;
	 





}

