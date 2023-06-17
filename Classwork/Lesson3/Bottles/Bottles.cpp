#include <iostream>
#include <windows.h>
#include <format>
#include <iomanip>
using namespace std;


int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int big_bottles_amount, small_bottles_amount;
    float big_bottles_cost = 0.25;
    float small_bottles_cost = 0.10;
    float totalAmount;

    cout << "Введите количество\nбутылок большого размера: ";
    cin >> big_bottles_amount;
    cout << "\nВведите количество\nбутылок маленького размера: ";
    cin >> small_bottles_amount;

    totalAmount = (big_bottles_amount * big_bottles_cost) + (small_bottles_amount * small_bottles_cost);

    // 1)
    // нужна библиотека #include <iomanip>
    // https://learn.microsoft.com/ru-ru/cpp/standard-library/iomanip?f1url=%3FappId%3DDev16IDEF1%26l%3DRU-RU%26k%3Dk(%253Ciomanip%253E)%3Bk(DevLang-C%252B%252B)%3Bk(TargetOS-Windows)%26rd%3Dtrue&view=msvc-170
    std::cout << "Сумма, которую можно выручить: $" << std::fixed << std::setprecision(2) << totalAmount << std::endl;

    // 2)
    // нужна библиотека #include <format>
    // для использования std::format вам может потребоваться компилятор, поддерживающий стандарт C++20.
    cout << format("Сумма к получению: $%.2f%\n", totalAmount);

    // 3)
    // #include <locale>
    // установлена локаль "en_US.UTF-8" с помощью std::locale, чтобы правильно отображать символы доллара и разделителя тысяч.
    //
    std::cout.imbue(std::locale("en_US.UTF-8"));  // Установка локали для правильного форматирования
    std::cout << "Сумма, которую можно выручить: " << std::put_money(totalAmount) << std::endl;

    // 4)
    printf("Сумма к получению: $%.2f", totalAmount);


}
