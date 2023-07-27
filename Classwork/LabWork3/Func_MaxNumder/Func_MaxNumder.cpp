#include <iostream>

using namespace std;

int MaxFunc(int count1, int count2)
{
	if (count1 > count2) {
		return count1;
	}
	else {
		return count2;
	}

}


int main()
{
	setlocale(LC_ALL, "Rus");

	int num1, num2;
	cout << "Введите два числа: ";
	cin >> num1 >> num2;

	cout << "Наибольшее число: " << MaxFunc(num1, num2) << endl;

}
