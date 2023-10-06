// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

struct WashingMachine
{
	string model;
	string color;
	double width;
	double length;
	double height;
	int power;
	int spinSpeed;
	int heatingTemp;
};



void Show(WashingMachine washMash)
{
	cout << "Выводим информацию с помощью обычной функции: " << endl;
	cout << "Модель: " << washMash.model << endl;
	cout << "Цвет: " << washMash.color << endl;
	cout << "Габариты (Ш х Д х В): " << washMash.width << "см х " << washMash.length << "см х " << washMash.height << "см х " << endl;
	cout << "Мощность: " << washMash.power << endl;
	cout << "Скорость отжима: " << washMash.spinSpeed << endl;
	cout << "Температура нагрева: " << washMash.heatingTemp << "\n\n";
}

void ShowPtr(WashingMachine* washMash)
{
	cout << "Выводим информацию с помощью указателя: " << endl;
	cout << "Модель (через указатель и функцию): " << washMash->model << endl;
	cout << "Цвет (через указатель): " << washMash->color << endl;
	cout << "Габариты (Ш x Д x В) (через указатель): " << washMash->width << "см x " << washMash->length << "см x " << washMash->height << "см" << endl;
	cout << "Мощность (через указатель): " << washMash->power << " Вт" << endl;
	cout << "Скорость отжима (через указатель): " << washMash->spinSpeed << " об/мин" << endl;
	cout << "Температура нагрева (через указатель): " << washMash->heatingTemp << "°C" << "\n\n";
}

void PutPtr(WashingMachine* washMash)
{
	// Очищаем входной буфер
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Вводим информацию с помощью указателя: " << endl;
	cout << "Модель: ";
	getline(cin, washMash->model); // Считываем строку с пробелами
	cout << "Цвет: ";
	cin >> washMash->color;
	cout << "Ширину: ";
	cin >> washMash->width;
	cout << "Длину: ";
	cin >> washMash->length;
	cout << "Высоту: ";
	cin >> washMash->height;
	cout << "Мощность: ";
	cin >> washMash->power;
	cout << "Скорость отжима: ";
	cin >> washMash->spinSpeed;
	cout << "Температура нагрева: ";
	cin >> washMash->heatingTemp;

	cout << "\n\n";
}

void PutRef(WashingMachine& washMash)
{
	// Очищаем входной буфер
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Вводим информацию с помощью ссылки: " << endl;
	cout << "Модель: ";
	getline(cin, washMash.model); // Считываем строку с пробелами
	cout << "Цвет: ";
	cin >> washMash.color;
	cout << "Ширину: ";
	cin >> washMash.width;
	cout << "Длину: ";
	cin >> washMash.length;
	cout << "Высоту: ";
	cin >> washMash.height;
	cout << "Мощность: ";
	cin >> washMash.power;
	cout << "Скорость отжима: ";
	cin >> washMash.spinSpeed;
	cout << "Температура нагрева: ";
	cin >> washMash.heatingTemp;

	cout << "\n\n";
}

void ShowRef(WashingMachine& washMash)
{
	cout << "Выводим информацию с помощью ссылки: " << endl;
	cout << "Модель: " << washMash.model << endl;
	cout << "Цвет: " << washMash.color << endl;
	cout << "Габариты (Ш х Д х В): " << washMash.width << "см х " << washMash.length << "см х " << washMash.height << "см х " << endl;
	cout << "Мощность: " << washMash.power << endl;
	cout << "Скорость отжима: " << washMash.spinSpeed << endl;
	cout << "Температура нагрева: " << washMash.heatingTemp << "\n\n";
}


WashingMachine Put()
{

	// формирование объекта
	WashingMachine temp;
	cout << "Модель: ";
	getline(cin, temp.model); // Считываем строку с пробелами
	cout << "Цвет: ";
	cin >> temp.color;
	cout << "Ширину: ";
	cin >> temp.width;
	cout << "Длину: ";
	cin >> temp.length;
	cout << "Высоту: ";
	cin >> temp.height;
	cout << "Мощность: ";
	cin >> temp.power;
	cout << "Скорость отжима: ";
	cin >> temp.spinSpeed;
	cout << "Температура нагрева: ";
	cin >> temp.heatingTemp;

	cout << "\n\n";

	return temp;
}

void ShowMass(WashingMachine machines[], int count)
{
	cout << "Выводим содержимое массива структур: " << endl << endl;

	for (int i = 0; i < count; i++)
	{
		Show(machines[i]);
	}
}



int main()
{
	setlocale(LC_ALL, "ru");


	WashingMachine myWashingMachine = { "Samsung", "Белый", 60.0, 70.0, 85.0, 2000, 1200, 40 };

	cout << "Модель: " << myWashingMachine.model << endl;
	cout << "Цвет: " << myWashingMachine.color << endl;
	cout << "Габариты (Ш х Д х В): " << myWashingMachine.width << "см х " << myWashingMachine.length << "см х " << myWashingMachine.height << "см х " << endl;
	cout << "Мощность: " << myWashingMachine.power << endl;
	cout << "Скорость отжима: " << myWashingMachine.spinSpeed << endl;
	cout << "Температура нагрева: " << myWashingMachine.heatingTemp << "\n\n";

	// Создаем указатель на структуру и инициализируем его
	WashingMachine* ptrWashingMachine = &myWashingMachine;

	cout << "Выводим информацию о стиральной машинке через указатель: " << endl;

	cout << "Модель (через указатель): " << ptrWashingMachine->model << endl;
	cout << "Цвет (через указатель): " << ptrWashingMachine->color << endl;
	cout << "Габариты (Ш x Д x В) (через указатель): " << ptrWashingMachine->width << "см x " << ptrWashingMachine->length << "см x " << ptrWashingMachine->height << "см" << endl;
	cout << "Мощность (через указатель): " << ptrWashingMachine->power << " Вт" << endl;
	cout << "Скорость отжима (через указатель): " << ptrWashingMachine->spinSpeed << " об/мин" << endl;
	cout << "Температура нагрева (через указатель): " << ptrWashingMachine->heatingTemp << "°C" << "\n\n";

	// Создаем вторую стиралку (Создаем экземпляр структуры)
	WashingMachine secondWashingMachine;

	// Копируем все значения из myWashingMachine в secondWashingMachine
	secondWashingMachine = myWashingMachine;
	cout << "Значения второй стиралки копии myWashingMachine: " << "\n\n";

	cout << "Модель: " << secondWashingMachine.model << endl;
	cout << "Цвет: " << secondWashingMachine.color << endl;
	cout << "Габариты (Ш х Д х В): " << secondWashingMachine.width << "см х " << secondWashingMachine.length << "см х " << secondWashingMachine.height << "см х " << endl;
	cout << "Мощность: " << secondWashingMachine.power << endl;
	cout << "Скорость отжима: " << secondWashingMachine.spinSpeed << endl;
	cout << "Температура нагрева: " << secondWashingMachine.heatingTemp << "\n\n";

	cout << "Выводим значений через функцию Show: " << "\n\n";
	Show(secondWashingMachine);



	cout << "Выводим значений через функцию ShowPtr значения передаются по указателю: " << "\n\n";
	ShowPtr(&secondWashingMachine);


	cout << "Создаем и заполняем еще одну стиралку: " << "\n\n";
	// Создаем экземпляр структуры
	WashingMachine anyWashingMachine;
	// Заполняем 
	anyWashingMachine = Put();
	// Выводим на экран заполненную структуру
	Show(anyWashingMachine);

	cout << "Изменяем название модели в структуре: " << "\n\n";
	cout << "Модель: ";
	getline(cin, anyWashingMachine.model); // Считываем строку с пробелами
	Show(anyWashingMachine);
	cout << "\n\n";

	//Очищаем входной буфер
	cout << "Очищаем входной буфер. Нажмите Enter для продолжения." << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Изменяем название модели в структуре используя указатель: " << "\n\n";
	WashingMachine* ptrWM = &anyWashingMachine;
	cout << "Модель: ";
	getline(cin, ptrWM->model); // Считываем строку с пробелами
	ShowPtr(&anyWashingMachine);
	cout << "\n\n";


	//Очищаем входной буфер
	cout << "Очищаем входной буфер. Нажмите Enter для продолжения." << endl;
	if (std::cin.peek() == '\n') {
		std::cin.ignore();
	}

	cout << "Изменяем название модели в структуре используя ссылку: " << "\n\n";
	WashingMachine& refWashMash = anyWashingMachine;
	cout << "Модель: ";
	getline(cin, refWashMash.model); // Считываем строку с пробелами
	ShowRef(anyWashingMachine);
	cout << "\n\n";

	cout << "Стиралка через указатель: " << "\n\n";
	// Создаем экземпляр структуры
	WashingMachine ptrWashingMachine2;
	// Заполняем 
	PutPtr(&ptrWashingMachine2);
	// Выводим на экран заполненную структуру
	ShowPtr(&ptrWashingMachine2);


	cout << "Стиралка используя ссылку: " << "\n\n";
	// Создаем экземпляр структуры
	WashingMachine refWashingMachine;
	// Заполняем 
	PutRef(refWashingMachine);
	// Выводим на экран заполненную структуру
	ShowRef(refWashingMachine);

	// Динамическое выделение памяти для структуры
	WashingMachine* dynamicWm = new WashingMachine;
	// заполняес данными из структуры myWashingMachine
	*dynamicWm = myWashingMachine;
	ShowPtr(dynamicWm);
	// Изменяем некоторые поля
	dynamicWm->model = "panasonic p567";
	dynamicWm->width = 58.0;
	dynamicWm->length = 68.0;


	ShowPtr(dynamicWm);


	// Создание массива структур

	const int numberOfMachines = 7;
	WashingMachine washingMachines[numberOfMachines];

	// Инициализация элементов массива
	washingMachines[0] = { "Samsung", "Белый", 60.0, 70.0, 85.0, 2000, 1200, 40 };
	washingMachines[1] = myWashingMachine;
	washingMachines[2] = secondWashingMachine;
	washingMachines[3] = anyWashingMachine;
	washingMachines[4] = refWashingMachine;
	washingMachines[5] = *ptrWashingMachine;
	washingMachines[6] = *dynamicWm;




	ShowMass(washingMachines, numberOfMachines);

	// Освобождаем память после использования
	delete dynamicWm;

	return 0;
}
