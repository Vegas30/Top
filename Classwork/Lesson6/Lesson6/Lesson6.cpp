#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	//int x0, y0, r1, r2, x, y;
	//float L;

	//cout << "Задача 1.\nПринадлежность точки к кольцу." << endl;

	//cout << "Введите значение переменной x0: " << endl;
	//cin >> x0;
	//cout << "Введите значение переменной x1: " << endl;
	//cin >> x1;
	//cout << "Введите значение переменной r1: " << endl;
	//cin >> r1;
	//cout << "Введите значение переменной r2: " << endl;
	//cin >> r2;
	//cout << "Введите значение переменной x: " << endl;
	//cin >> x;
	//cout << "Введите значение переменной y: " << endl;
	//cin >> y;

	//L = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

	//if ((L > r1) && (L > r2)) 
	//{
	//	cout << "точка L принадлежит кольцу между радиусом r1 и r2" << endl;
	//}
	//else
	//{
	//	cout << "Точка L не принадлежит кольцу между радиусом r1 и r2" << endl;
	//}

	int a, b, res, m;

	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение пункта меню." << endl;
	cout << "1) Cложение.\n2) Вычитание.\n3) Деление.\n4) Уможение." << endl;

	cin >> m;

	switch (m)
	{
	case 1:
		res = a + b;
		cout << "Сумма чисел a и b равна: " << res << endl;
		break;
	case 2:
		res = a - b;
		cout << "Разница чисел a и b равна: " << res << endl;
		break;
	case 3:
		res = a / b;
		cout << "Остаток от деления a и b равен: " << res << endl;
		break;
	case 4:
		res = a * b;
		cout << "Произведение чисел a и b равна: " << res << endl;
		break;
	default:
		cout << "Введено не корректное значение";
		break;

	}


}
