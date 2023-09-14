// Побитовые операции пример.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int y = 2, x = 3, z = 1, k;
	k = x | y & z; // Операция 1
	cout << k << endl;
	k = x | y & ~z; // Операция 2
	cout << k << endl;
	k = x ^ y & ~z; // Операция 3
	cout << k << endl;
	k = x & y && z; // Операция 4
	cout << k << endl;

	x = 1;
	y = -1;
	k = !x | x; // Операции 5
	cout << k << endl;
	k = -x | x; // Операции 6
	cout << k << endl;
	k = x ^ x; // Операции 7
	cout << k << endl;
	x <<= 3; // Операции 8
	cout << x << endl;
	y <<= 3; // Операции 9
	cout << y << endl;
	y >>= 3; // Операции 10
	cout << y << endl;
	return 0;
}