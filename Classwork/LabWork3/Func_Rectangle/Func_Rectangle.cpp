#include <iostream>
#include <format>

using namespace std;


void rectangle(int height, int width)
{

	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}


int main()
{
	setlocale(LC_ALL, "Rus");

	int height, width;

	// Запрашиваем у пользователя высоту и ширину прямоугольника
	cout << "Введите высоту прямоугольника: ";
	cin >> height;

	cout << "Введите ширину прямоугольника: ";
	cin >> width;

	// Выводим прямоугольник на экран
	rectangle(height, width);



	return 0;
}


