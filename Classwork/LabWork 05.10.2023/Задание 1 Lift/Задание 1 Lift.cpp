// Задание 1 Lift.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

class Lift
{
private:
	int lowerFloor;
	int upperFloor;
	bool isWorking;
	int currentFloor;

public:
	// Конструктор для установки диапазона этажей и инициализации состояния лифта
	Lift(int lower, int upper)
	{
		lowerFloor = lower;
		upperFloor = upper;
		isWorking = false;
		currentFloor = lower;
	}

	// Метод для включения/выключения лифта
	void togglePower()
	{
		isWorking = !isWorking;
	}

	// Метод для обработки вызова лифта на определенный этаж
	void call(int floor)
	{
		if (isWorking && floor >= lowerFloor && floor <= upperFloor)
		{
			std::cout << "Лифт движется на этаж " << floor << std::endl;
			currentFloor = floor;
		}
		else
		{
			std::cout << "Лифт не может приехать на этот этаж" << std::endl;
		}
	}

	// Метод для возвращения текущего состояния лифта
	bool getStatus() const
	{
		return isWorking;
	}

	// Метод для возвращения текущего положения лифта (этажа)
	int getCurrentFloor() const
	{
		return currentFloor;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Lift lift(1, 10); // Создаем лифт, работающий с этажей с 1 по 10

	std::cout << "Лифт включен? " << (lift.getStatus() ? "Да" : "Нет") << std::endl;

	lift.togglePower(); // Включаем лифт

	std::cout << "Лифт включен? " << (lift.getStatus() ? "Да" : "Нет") << std::endl;

	lift.call(5); // Вызываем лифт на 5-й этаж

	std::cout << "Лифт находится на этаже: " << lift.getCurrentFloor() << std::endl;

	return 0;
}

