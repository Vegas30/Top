#include <iostream>
#include <iomanip>

union ByteUnion {
    int integer;
    char bytes[sizeof(int)];
};

// Функция для ввода целого числа
void inputInteger(ByteUnion& data) {
    std::cout << "Введите целое число: ";
    std::cin >> data.integer;
}

// Функция для просмотра всех байтов числа
void viewAllBytes(const ByteUnion& data) {
    std::cout << "Байты числа " << data.integer << ":" << std::endl;
    for (size_t i = 0; i < sizeof(int); ++i) {
        std::cout << "Байт " << i + 1 << ": " << static_cast<int>(data.bytes[i]) << std::endl;
    }
}

// Функция для просмотра выбранного байта числа
void viewSelectedByte(const ByteUnion& data, int byteIndex) {
    if (byteIndex >= 0 && byteIndex < sizeof(int)) {
        std::cout << "Байт " << byteIndex + 1 << ": " << static_cast<int>(data.bytes[byteIndex]) << std::endl;
    }
    else {
        std::cout << "Некорректный индекс байта." << std::endl;
    }
}

// Функция для вывода байтов числа в двоичной и шестнадцатеричной форме
void viewBytesInBinaryAndHex(const ByteUnion& data) {
    std::cout << "Байты числа " << data.integer << " в двоичной и шестнадцатеричной форме:" << std::endl;
    for (size_t i = 0; i < sizeof(int); ++i) {
        std::cout << "Байт " << i + 1 << " в двоичной форме: ";
        for (int j = 7; j >= 0; --j) {
            std::cout << ((data.bytes[i] >> j) & 1);
        }
        std::cout << " (0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(data.bytes[i]) << std::dec << ")" << std::endl;
    }
}

int main() 
{
    setlocale(LC_ALL, "ru");
    ByteUnion data;

    inputInteger(data);
    viewAllBytes(data);

    int selectedByteIndex;
    std::cout << "Введите индекс байта для просмотра: ";
    std::cin >> selectedByteIndex;
    viewSelectedByte(data, selectedByteIndex);

    viewBytesInBinaryAndHex(data);

    return 0;
}
