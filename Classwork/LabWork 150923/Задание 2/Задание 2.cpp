#include <iostream>

union SignedUnsignedInt 
{
    int signedValue;
    unsigned int unsignedValue;
};

int main() 
{
    setlocale(LC_ALL, "ru");

    SignedUnsignedInt suInt;

    // Присваиваем значение как знаковому целому
    suInt.signedValue = -123;

    // Обращаемся к значению как к знаковому целому
    std::cout << "Знаковое значение: " << suInt.signedValue << std::endl;

    // Обращаемся к значению как к беззнаковому целому
    std::cout << "Беззнаковое значение: " << suInt.unsignedValue << std::endl;

    return 0;
}
