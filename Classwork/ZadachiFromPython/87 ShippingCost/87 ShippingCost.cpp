#include <iostream>

double calculateShippingCost(int numberOfItems) {
    const double firstItemShippingCost = 10.95;
    const double additionalItemShippingCost = 2.95;

    if (numberOfItems <= 0) {
        return 0.0; // Если заказ пустой, доставка бесплатна
    }
    else if (numberOfItems == 1) {
        return firstItemShippingCost; // Для первого товара
    }
    else {
        double totalShippingCost = firstItemShippingCost + (additionalItemShippingCost * (numberOfItems - 1));
        return totalShippingCost;
    }
}

int main() {
    int numberOfItems;

    // Запрашиваем у пользователя количество товаров в заказе
    cout << "Введите количество товаров в заказе: ";
    cin >> numberOfItems;

    if (numberOfItems < 0) {
        cout << "Ошибка: Количество товаров не может быть отрицательным.\n";
        return 1;
    }

    double shippingCost = calculateShippingCost(numberOfItems);

    cout << "Общая сумма доставки: $" << shippingCost << endl;

    return 0;
}
