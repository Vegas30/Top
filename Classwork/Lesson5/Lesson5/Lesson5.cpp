#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	double a, b;
	string x;

	cout << "Введите первое число: ";
	cin >> a;

	cout << "Выберите вид операции: \n+\n-\n*\n/ ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> b;

	if (x == "+")
	{
		cout << "Результат: " << a + b << endl;
	}
	else if (x == "-")
	{
		cout << "Результат: " << a - b << endl;
	}
	else if (x == "/")
	{
		cout << "Результат: " << a / b << endl;
	}
	else 
	{
		cout << "Результат: " << a * b << endl;
	}

}


