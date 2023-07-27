#include <iostream>
#include <format>

using namespace std;


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


int main()
{
	setlocale(LC_ALL, "Rus");

	int n;

	cout << "Введите число: ";
	cin >> n;

	if (n >= 0) {
		unsigned long long result = factorial(n);
		cout << "Факториал числа " << n << " равен: " << result << "\n";
	}
	else {
		cout << "Ошибка: Введенное число должно быть неотрицательным.\n";
	}



	return 0;
}


