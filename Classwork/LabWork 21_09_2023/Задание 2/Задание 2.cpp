// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>

struct Iron
{
	std::string firm;
	std::string model;
	std::string color;
	double minTemp;
	double maxTemp;
	bool steam;
	int power;

};

void Fill(Iron& newIron)
{

	std::cout << "Введите данные утюга: " << std::endl;

	std::cout << "Фирма: " << std::endl;
	std::getline(std::cin, newIron.firm);
	std::cout << "Модель: " << std::endl;
	std::getline(std::cin, newIron.model);
	std::cout << "Цвет: " << std::endl;
	std::cin >> newIron.color;
	std::cout << "Минимальная температура: " << std::endl;
	std::cin >> newIron.minTemp;
	std::cout << "Максимальная температура: " << std::endl;
	std::cin >> newIron.maxTemp;
	std::cout << "Пар есть или нет (да/нет): " << std::endl;
	std::string isSteam;
	std::cin >> isSteam;
	newIron.steam = (isSteam == "да" || isSteam == "Да" || isSteam == "ДА");
	std::cout << "Мощность: " << std::endl;
	std::cin >> newIron.power;
}

void Show(const Iron& iron) 
{
	std::cout << "Информация об утюге:" << std::endl;

	std::cout << "Фирма: " << iron.firm << std::endl;
	std::cout << "Модель: " << iron.model << std::endl;
	std::cout << "Цвет: " << iron.color << std::endl;
	std::cout << "Минимальная температура: " << iron.minTemp << " °C" << std::endl;
	std::cout << "Минимальная температура: " << iron.maxTemp << " °C" << std::endl;
	std::cout << "Функция подачи пара: " << (iron.steam ? "Да" : "Нет") << std::endl;
	std::cout << "Мощьность: " << iron.power << " кВТ" << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	Iron myIron;

	Fill(myIron);

	Show(myIron);

}
