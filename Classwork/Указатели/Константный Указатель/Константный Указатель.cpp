#include <iostream>

using namespace std;

int main()
{

	int a = 12;

	int* const ptr = &a;

	cout << *ptr << " " << a;


	// ошибка не указан адрес при создании указателя
	//int* const ptr;

	int b = 23;

	//нельзя перенаправлять константный указатель
	//ptr = &b;

	//изменяем значение
	*ptr = 95;

	cout << *ptr << " " << a;
}
