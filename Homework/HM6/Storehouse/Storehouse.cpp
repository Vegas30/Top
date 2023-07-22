#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int sum_jashch;
	int otgruz;

	cout << "Сколько всего ящиков: ";
	cin >> sum_jashch;
	int count_car = 1;
	do
	{
		cout << "Приехала " << count_car <<
			" машина. Сколько ящиков отгружать: ";
		do
		{
			cin >> otgruz;
			if (otgruz > sum_jashch)
				cout << "Столько ящиков нет. Укажите меньшее количество: ";
		} while (otgruz > sum_jashch);
		sum_jashch -= otgruz;
		count_car++;
	} while (sum_jashch > 0);


	cout << "Вот столько машин понадобилось чтобы забрать все коробки: " << count_car - 1 <<  endl;

	return 0;
}