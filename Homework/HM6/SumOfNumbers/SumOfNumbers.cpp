/* Программа находит сумму всех целых нечетных чисел в диапазоне, указаном пользователем */


#include <iostream>

using namespace std;

int main()
{
    int start, end;

    cout << "Введите начальное значение диапазона: ";
    cin >> start;

    cout << "Введите конечное значение диапазона: ";
    cin >> end;

    int sum = 0;

    for (int i = start; i <= end; ++i) 
    {
        if (i % 2 != 0) 
        {
            sum += i;
        }
    }

    cout << "Сумма всех целых нечетных чисел в диапазоне от " << start << " до " << end << " равна: " << sum << "\n";

    return 0;


}
