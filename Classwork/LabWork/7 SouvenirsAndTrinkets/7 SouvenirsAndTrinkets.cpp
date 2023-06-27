// требуется стандарт языка C++20 иначе не будет работать format()
#include <iostream>
#include <format>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const int souvenir_weight = 75;
	const int trinket_weight = 112;
	int souvenir_amount, trinket_amount;
	double total_weigh;

	cout << format("{:>30}:", "Введите количество сувениров");
	cin >> souvenir_amount;

	cout << format("{:>30}:", "Введите количество безделушек");
	cin >> trinket_amount;

	total_weigh = (souvenir_weight * souvenir_amount) + (trinket_weight * trinket_amount);

	cout << format("{:>30}:{:<10}", string(30, '-'), string(10, '-')) << endl;
	cout << format("{:>30}:{:<10.3f}", "Общий вес покупки в кг", total_weigh / 1000) << endl;




}