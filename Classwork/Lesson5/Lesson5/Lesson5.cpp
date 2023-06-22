#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	double a, b;
	string x;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;

	cout << "Выберите вид операции: \nСложение - 1\nВычитание - 2\nУмножение - 3\nДеление - 4\n";
	cin >> x;

	if (x == "1")
	{
		cout << "Результат сложения: " << a << " + " << b << " = " << a + b << endl;
	}
	else if (x == "2")
	{
		cout << "Результат вычитания: " << a << " - " << b << " = " << a - b << endl;
	}
	else if (x == "3")
	{
		cout << "Результат умножения: " << a << " * " << b << " = " << a * b << endl;
	}
	else 
	{
		cout << "Результат деления: " << a << " / " << b << " = " << a / b << endl;
	}

}


