#include <iostream>

union IntWithBooleanArray 
{
    int integer;
    bool bytes[sizeof(int) * 8]; // По одному биту на каждый байт
};

// Функция для ввода целого числа
void inputInteger(IntWithBooleanArray& data) 
{
    std::cout << "Введите целое число: ";
    std::cin >> data.integer;
}

// Функция для подсчета нулевых байтов числа
int countZeroBytes(const IntWithBooleanArray& data) 
{
    int zeroByteCount = 0;
    for (size_t i = 0; i < sizeof(int) * 8; ++i) 
    {
        if (!data.bytes[i]) 
        {
            zeroByteCount++;
        }
    }
    return zeroByteCount;
}

// Функция для вывода информации о байтах числа (нулевой и не нулевой)
void viewBytesInfo(const IntWithBooleanArray& data) 
{
    std::cout << "Информация о байтах числа " << data.integer << ":" << std::endl;
    for (size_t i = 0; i < sizeof(int) * 8; ++i) 
    {
        std::cout << "Байт " << i / 8 << " (бит " << i % 8 << "): " << (data.bytes[i] ? "Не нулевой" : "Нулевой") << std::endl;
    }
}

int main() 
{
    setlocale(LC_ALL, "ru");
    IntWithBooleanArray data;

    inputInteger(data);

    int zeroByteCount = countZeroBytes(data);
    std::cout << "Количество нулевых байтов: " << zeroByteCount << std::endl;

    viewBytesInfo(data);

    return 0;
}
