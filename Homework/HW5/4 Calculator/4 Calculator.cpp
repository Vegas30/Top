#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");

    double num1, num2;
    int operation;
    double result;


    while (true)
    {
        cout << "\nТак себе калькулятор:" << endl;
        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите второе число: ";
        cin >> num2;
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Максимум" << endl;
        cout << "6. Минимум" << endl;
        cout << "7. Выход" << endl;
        cout << "Выберите операцию (1-7): ";
        cin >> operation;

        switch (operation) {
        case 1:
            result = num1 + num2;
            cout << "Результат сложения: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Результат вычитания: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Результат умножения: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Результат деления: " << result << endl;
            }
            else {
                cout << "Ошибка: деление на ноль!" << endl;
            }
            break;
        case 5:
            result = (num1 > num2) ? num1 : num2;
            cout << "Максимум: " << result << endl;
            break;
        case 6:
            result = (num1 < num2) ? num1 : num2;
            cout << "Минимум: " << result << endl;
            break;
        case 7:
            cout << "Программа завершена." << endl;
            return 0;
        default:
            cout << "Некорректный выбор. Пожалуйста, выберите операцию от 1 до 7." << endl;
            break;
        }
    }

    return 0;
}
