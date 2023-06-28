#include <iostream>

using namespace std;


int main()
{

	setlocale(LC_ALL, "Rus");

	const double cm_in_inch = 2.54;
	int choice = 0;
	double value;

	while (true)
	{
		cout << "Меню:" << endl;
		cout << "1. Перевести дюймы в сантиметры" << endl;
		cout << "2. Перевести сантиметры в дюймы" << endl;
		cout << "3. Выход" << endl;
		cout << "Выберите операцию (1-3): ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Введите значение в дюймах: ";
			cin >> value;
			double centimeters = value * cm_in_inch;
			cout << value << " дюймов = " << centimeters << " сантиметров" << endl;
			break;

		case 2:
			cout << "Введите значение в сантиметрах: ";
			cin >> value;
			double inches = value / cm_in_inch;
			cout << value << " сантиметров = " << inches << " дюйм(ов)" << endl;
			break;

		case 3:
			cout << "Программа завершена." << endl;
			return 0;
		default:
			cout << "Некорректный выбор. Пожалуйста, выберите операцию от 1 до 3." << endl;
			break;
		}

		cout << endl;
	}

	return 0;
}
