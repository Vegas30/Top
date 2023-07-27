#include <iostream>
#include <format>

using namespace std;

bool pozitivNegativ(int num)
{
	if (num > 0)
	{

		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	setlocale(LC_ALL, "Rus");

	int num;


	// истина лож
	cout << "Введите число: ";
	cin >> num;

	int result = pozitivNegativ(num);
	if (result == 1)
	{
		cout << "Результат " << num << " равен: " << result << " true " << "\n";

	}
	else
	{
		cout << "Результат " << num << " равен: " << result << " false " << "\n";

	}


	return 0;
}


