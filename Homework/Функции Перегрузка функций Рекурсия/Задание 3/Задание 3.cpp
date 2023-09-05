// Задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать игру «Быки и коровы».Программа
«загадывает» четырёхзначное число и играющий должен
угадать его.После ввода пользователем числа программа
сообщает, сколько цифр числа угадано(быки) и сколько
цифр угадано и стоит на нужном месте(коровы).После
отгадывания числа на экран необходимо вывести коли -
чество сделанных пользователем попыток.В программе
необходимо использовать рекурсию */

#include <iostream>
#include <ctime>
#include <cstdlib>

// Генерация случайного четырёхзначного числа
int generateRandomNumber() {
    std::srand(std::time(0));
    return 1000 + std::rand() % 9000;
}

// Получение i-й цифры числа
int getDigit(int number, int i) {
    for (int j = 0; j < i; ++j) {
        number /= 10;
    }
    return number % 10;
}

// Сравнение двух чисел и определение быков и коров
void compareNumbers(int secretNumber, int guessedNumber, int& bulls, int& cows) {
    bulls = 0;
    cows = 0;

    for (int i = 0; i < 4; ++i) {
        int secretDigit = getDigit(secretNumber, i);
        int guessedDigit = getDigit(guessedNumber, i);

        if (secretDigit == guessedDigit) {
            ++bulls;
        }
        else {
            for (int j = 0; j < 4; ++j) {
                if (secretDigit == getDigit(guessedNumber, j)) {
                    ++cows;
                    break;
                }
            }
        }
    }
}

// Рекурсивная функция для игры
void playGame(int secretNumber, int attempts) {
    int guessedNumber;
    std::cout << "Enter your guess: ";
    std::cin >> guessedNumber;

    if (guessedNumber == secretNumber) {
        std::cout << "Congratulations! You've guessed the number " << secretNumber << " in " << attempts << " attempts." << std::endl;
        return;
    }

    int bulls, cows;
    compareNumbers(secretNumber, guessedNumber, bulls, cows);

    std::cout << "Bulls: " << bulls << ", Cows: " << cows << std::endl;
    playGame(secretNumber, attempts + 1);
}

int main() {
    int secretNumber = generateRandomNumber();
    std::cout << "Welcome to the Bulls and Cows game!" << std::endl;
    playGame(secretNumber, 1);
    return 0;
}

