#include <iostream>

using namespace std;

// Обмен с использованием указателей
void interchange_ptr(int* u, int* v)
{
	int temp = *u;
	*u = *v;
	*v = temp;

}

// Обмен с использованием ссылок
void interchange_ref(int& u, int& v)
{
	int temp = u;
	u = v;
	v = temp;
}


int main()
{
	int x = 5, y = 10;
	cout << "Change with pointers:\n";
	cout << "x = " << x << "    y = " << y << "\n";

	//используем указатели
	interchange_ptr(&x, &y);
	cout << "x = " << x << "    y = " << y << "\n";
	cout << "--------------------------  " << "\n";
	cout << "Change with references:\n";
	cout << "x = " << x << "    y = " << y << "\n";

	//используем ссылки
	interchange_ref(x, y);
	cout << "x = " << x << "    y = " << y << "\n";
	return 0;


}
