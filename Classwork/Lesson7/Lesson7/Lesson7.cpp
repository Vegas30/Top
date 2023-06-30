#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	//int d;
	//cout << "Введите кол-во денег: ";
	//cin >> d;
	//int p = 2;
	//int s = 0;

	//while (d > 0) {
	//    d -= p;
	//    s++;
	//}
	//cout << "Можно купить " << s << " мороженых" << endl;

	int a, b, res;

	do {
		cout << "Введите значение переменной a: " << endl;
		cin >> a;

		cout << "Введите значение переменной b : " << endl;
		cin >> b;

		res = a + b;

		cout << "Результат: " << res << endl;

	} 
	while (a > 0 && b > 0 && res > 0 && res < 50);

}
