#include <iostream>
#include <iomanip>

using namespace std;

bool isWeekend(int dayOfWeek) {
    // 0 - воскресенье, 6 - суббота
    return (dayOfWeek == 0 || dayOfWeek == 6);
}

void printMonth(int startDay, int daysInMonth) {
    cout << "Пн Вт Ср Чт Пт Сб Вс\n";

    int day = 1;
    int dayOfWeek = startDay;

    // Выводим пробелы перед первым днем месяца
    for (int i = 0; i < startDay; ++i) {
        cout << "   ";
    }

    // Выводим дни месяца
    while (day <= daysInMonth) {
        cout << setw(2) << day << " ";

        // Переходим на новую строку после субботы
        if (dayOfWeek == 6) {
            cout << endl;
        }

        day++;
        dayOfWeek = (dayOfWeek + 1) % 7;
    }

    // Завершаем строку, если месяц закончился не в субботу
    if (dayOfWeek != 0) {
        cout << endl;
    }
}

int countWeekends(int startDay, int daysInMonth) {
    int dayOfWeek = startDay;
    int weekendsCount = 0;

    for (int day = 1; day <= daysInMonth; ++day) {
        if (isWeekend(dayOfWeek)) {
            weekendsCount++;
        }

        dayOfWeek = (dayOfWeek + 1) % 7;
    }

    return weekendsCount;
}

int main() 
{
    setlocale(LC_ALL, "Rus");

    int startDay, daysInMonth;
    const string monthNames[] = {
        "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
        "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
    };

    // Запрашиваем у пользователя месяц и номер дня недели для начала месяца
    int month;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Ошибка: недопустимый номер месяца.\n";
        return 1;
    }

    cout << "Введите номер дня недели для начала месяца (0-6): ";
    cin >> startDay;

    if (startDay < 0 || startDay > 6) {
        cout << "Ошибка: недопустимый номер дня недели.\n";
        return 1;
    }

    // Определяем количество дней в месяце
    if (month == 2) {
        // Проверка на високосный год (в упрощенной форме)
        daysInMonth = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    }
    else {
        daysInMonth = 31;
    }

    cout << "Календарь на " << monthNames[month - 1] << ":\n";
    printMonth(startDay, daysInMonth);

    // Подсчитываем количество выходных дней в месяце
    int weekendsCount = countWeekends(startDay, daysInMonth);
    cout << "Количество выходных дней: " << weekendsCount << endl;

    return 0;
}
