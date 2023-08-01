#include <iostream> // подключаем cin/cout
#include <conio.h> // подключаем getch

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");
	int n;
	int i;
	int res;
	cout << "Введите число: ";
	cin >> n;
	res = 1;
	for (i = 1; i <= n; i++) {
		res = res * i;
	}
	cout << res;
}