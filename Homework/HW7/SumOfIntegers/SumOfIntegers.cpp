/* программа вычисляет сумму целых чисел от a до 500 (значения вводятся с клавиатуры) */

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");

    int a;
    std::cout << "Введите значение a: ";
    std::cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    std::cout << "Сумма чисел от " << a << " до 500 равна: " << sum << std::endl;

    return 0;


}
