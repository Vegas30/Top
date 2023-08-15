// Строки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int n = 5;

char line[5] = { 'C','a','t','!','\0' };
char line2[] = "Cat!";

int main()
{
	cout << "World: ";
	for (int i = 0; i < n; i++)
		cout << line[i];
	cout << line2;

}
