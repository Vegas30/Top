// Exercise_3_Cafe.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <locale>

struct MenuItem {
    std::string name;
    double price;
};

int main() {
    setlocale(LC_ALL, "ru"); // Устанавливаем русскую локаль для корректного вывода текста

    int numberOfPeople;
    double totalOrderAmount = 0;

    // Ввод количества человек в заказе
    std::cout << "Введите количество человек в заказе: ";
    std::cin >> numberOfPeople;

    // Меню кафетерия
    std::vector<MenuItem> menu = {
        {"Кофе", 2.5},
        {"Чай", 1.8},
        {"Пирожное", 3.0},
        {"Сэндвич", 4.5}
    };

    // Обработка заказа для каждого человека
    for (int i = 0; i < numberOfPeople; ++i) {
        std::vector<std::string> selectedItems;
        int itemNumber;

        std::cout << "Меню для клиента " << i + 1 << ":" << std::endl;

        // Выводим меню и позволяем клиенту выбирать элементы
        for (size_t j = 0; j < menu.size(); ++j) {
            std::cout << j + 1 << ". " << menu[j].name << " - $" << menu[j].price << std::endl;
        }

        // Обработка выбора клиента
        do {
            std::cout << "Выберите товар (0 для завершения выбора): ";
            std::cin >> itemNumber;

            if (itemNumber >= 1 && itemNumber <= menu.size()) {
                selectedItems.push_back(menu[itemNumber - 1].name);
                totalOrderAmount += menu[itemNumber - 1].price;
            }
            else if (itemNumber != 0) {
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова." << std::endl;
            }
        } while (itemNumber != 0);

        // Выводим выбранные элементы заказа для текущего клиента
        std::cout << "Заказ для клиента " << i + 1 << ": ";
        for (const auto& item : selectedItems) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }

    // Выводим общую сумму заказа для всей компании
    std::cout << "Общая сумма заказа: $" << totalOrderAmount << std::endl;

    return 0;
}
