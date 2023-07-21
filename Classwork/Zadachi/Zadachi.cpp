#include <iostream>
#include <format>

using namespace std;


void pramougolnik(int height, int width)
{

	for (int i = 0; i < height; ++i) 
	{
		for (int j = 0; j < width; ++j) 
		{
			if (i == 0 || i == height - 1 || j == 0 || j == width - 1) 
			{
				cout << "-";
			}
			else 
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}

void rectangle(int height, int weidth)
{

}

unsigned long long factorial(int n)
{


	if (n == 0 || n == 1)
	{
		return 1; // Факториал 0 и 1 равен 1
	}
	else
	{
		return n * factorial(n - 1); // Рекурсивно вычисляем факториал
	}
}

bool isPrime(int num) {
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

int cube(int number) {
	return number * number * number;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	
	int height, width, n, num, num_cube;

	// Запрашиваем у пользователя высоту и ширину прямоугольника
	cout << "Введите высоту прямоугольника: ";
	cin >> height;

	cout << "Введите ширину прямоугольника: ";
	cin >> width;

	// Выводим прямоугольник на экран
	pramougolnik(height, width);



	cout << "Введите число: ";
	cin >> n;

	if (n >= 0) {
		unsigned long long result = factorial(n);
		cout << "Факториал числа " << n << " равен: " << result << "\n";
	}
	else {
		cout << "Ошибка: Введенное число должно быть неотрицательным.\n";
	}



	// Запрашиваем у пользователя число для проверки на простое число
	cout << "Введите число: ";
	cin >> num;

	if (isPrime(num)) {
		cout << num << " - простое число.\n";
	}
	else {
		cout << num << " - не является простым числом.\n";
	}


	// Запрашиваем у пользователя число для вычисления куба числа
	cout << "Введите число: ";
	cin >> num_cube;

	int result = cube(num_cube);

	cout << "Куб числа " << num_cube << " равен: " << result << "\n";

	return 0;
}
