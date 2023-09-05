// Ex4_4 Код комбинации.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* На чемодане стоит трехзначный код. Он состоит из цифр, которые не повторяются. Напишите программу, которая выведет все возможные такие комбинации цифр. А также определите сколько времени понадобится для открытия чемодана в худшем случае, если на один такой набор уходит 3 секунды. */

//#include <iostream>
//#include <chrono>
//
//void generateCombinations(int digits[], int size, bool used[], int length, int currentDigit, int combination[]) {
//    if (length == 3) {
//        for (int i = 0; i < 3; i++) {
//            std::cout << combination[i];
//        }
//        std::cout << std::endl;
//        return;
//    }
//
//    for (int i = currentDigit; i < size; i++) {
//        if (!used[i]) {
//            combination[length] = digits[i];
//            used[i] = true;
//            generateCombinations(digits, size, used, length + 1, i + 1, combination);
//            used[i] = false;
//        }
//    }
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "ru");
//
//    int digits[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    bool used[9] = { false };
//    int combination[3] = { 0 };
//
//    auto start = std::chrono::high_resolution_clock::now();
//
//    generateCombinations(digits, 9, used, 0, 0, combination);
//
//    auto end = std::chrono::high_resolution_clock::now();
//    std::chrono::duration<double> duration = end - start;
//
//    std::cout << "Общее время для открытия чемодана в худшем случае: " << duration.count() * 3 << " секунд" << std::endl;
//
//    return 0;
//}



#include <iostream>
#include <ctime>

void generateCodes(int digits[], int currentIndex, int length, int currentCode) {
    if (length == 0) {
        std::cout << currentCode << std::endl;
        return;
    }

    for (int i = 0; i < 9; i++) {
        if (digits[i] != -1) {
            int digit = digits[i];
            int newDigits[9];
            std::copy(digits, digits + 9, newDigits);
            newDigits[i] = -1;
            generateCodes(newDigits, currentIndex + 1, length - 1, currentCode * 10 + digit);
        }
    }
}

int main() 
{   
    setlocale(LC_ALL, "ru");

    int digits[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int codeLength = 3;

    std::cout << "Возможные комбинации трехзначных кодов:" << std::endl;
    generateCodes(digits, 0, codeLength, 0);

    int numberOfCombinations = 9 * 8 * 7;
    int timeInSeconds = numberOfCombinations * 3;

    std::cout << "Время для открытия чемодана (секунд): " << timeInSeconds << std::endl;

    return 0;
}
