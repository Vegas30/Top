#include <iostream>
#include <format>

using namespace std;


bool isSimple(int num) {
	if (num <= 1) {
		return false; // Число меньше или равно 1, не является простым
	}

	// Проверяем делители от 2 до sqrt(num)
	for (int i = 2; i * i <= num; ++i) {
		if (num % i == 0) {
			return false; // Найден делитель, число не является простым
		}
	}

	return true; // Нет делителей, число является простым
}


int cube(int number)
{
	return number * number * number;
}


int main()
{
	setlocale(LC_ALL, "Rus");

	int num;


	// Запрашиваем у пользователя число для вычисления куба числа
	cout << "Введите число: ";
	cin >> num;

	int result = cube(num);

	cout << "Куб числа " << num << " равен: " << result << "\n";



	return 0;
}


