#include <iostream>
#include <format>

using namespace std;


void pramougolnik()
{
	int n, k;
	cout << "Введите высоту: ";
	cin >> n;
	cout << "Введите ширину: ";
	cin >> k;
	
	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}


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


int main()
{
	setlocale(LC_ALL, "Rus");
	 
	pramougolnik();


	unsigned long long res = factorial(n);
	cout << "Введите число: ";
		cin >> 
}
