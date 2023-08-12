#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int Age = 30;
	const double Pi = 3.1416;
	// Использование & для поиска адреса в памяти
	cout << "Integer Age is at: Ox" << hex << & Age << endl;
	cout << "Integer Age is at: Ox" << oct << & Age << endl;
		cout<< "Double Pi is located at: Ox" << hex << & Pi << endl;
	return 0;
}