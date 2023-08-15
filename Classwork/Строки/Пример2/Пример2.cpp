// Пример2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
const char* message = "Hello";
char privet[] = "and bye!";
char* pr = privet;

int main()
{

	cout << " " << message << " " << pr << "\n";
	int i = 0;
	while (*(pr + i) != '\0')
	{
		cout << *(pr + i++) << " ";
	}

	//cout << &privet << endl;
	//cout << pr << endl;
}
