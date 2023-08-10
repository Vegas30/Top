#include <iostream>

using namespace std;

int main()
{
	int ivar = 1234; // Переменной присвоено значение
	int* iptr = &ivar;// Указателю присвоен адрес ivar
	int& iref = ivar; // Ссылка ассоциирована с ivar
	int* p = &iref; // Указателю присвоен адресс iref

	cout << "ivar = " << ivar << "\n";
	cout << "*iptr = " << *iptr << "\n";
	cout << "iref = " << iref << "\n";
	cout << "*p = " << *p << "\n";

}
