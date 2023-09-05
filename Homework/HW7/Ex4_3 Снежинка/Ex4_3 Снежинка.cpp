// Ex4_3 Снежинка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

//int main() {
//    char snowflake[7][7] = {
//        {' ', '*', ' ', '*', ' ', '*', ' '},
//        {'*', ' ', '*', ' ', '*', ' ', '*'},
//        {' ', '*', ' ', '*', ' ', '*', ' '},
//        {'*', ' ', '*', ' ', '*', ' ', '*'},
//        {' ', '*', ' ', '*', ' ', '*', ' '},
//        {'*', ' ', '*', ' ', '*', ' ', '*'},
//        {' ', '*', ' ', '*', ' ', '*', ' '}
//    };
//
//    for (int i = 0; i < 7; i++) {
//        for (int j = 0; j < 7; j++) {
//            std::cout << snowflake[i][j];
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//
//int main() {
//    const int size = 7;
//    char snowflake[size][size];
//
//    // Заполнение массива символами пробелов
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            snowflake[i][j] = ' ';
//        }
//    }
//
//    // Заполнение снежинки
//    for (int i = 0; i < size; i++) {
//        snowflake[i][size / 2] = '*';
//        snowflake[size / 2][i] = '*';
//        snowflake[i][i] = '*';
//        snowflake[i][size - 1 - i] = '*';
//    }
//
//    // Вывод снежинки
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            std::cout << snowflake[i][j];
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//}


#include <iostream>

int main() 
{
    setlocale(LC_ALL, "ru");

    int size;
    std::cout << "Введите размер снежинки (нечетное число): ";
    std::cin >> size;

    if (size % 2 == 0) {
        std::cout << "Размер должен быть нечетным." << std::endl;
        return 1;
    }

    char** snowflake = new char* [size];
    for (int i = 0; i < size; i++) {
        snowflake[i] = new char[size];
        for (int j = 0; j < size; j++) {
            snowflake[i][j] = ' ';
        }
    }

    // Заполнение снежинки
    for (int i = 0; i < size; i++) {
        snowflake[i][size / 2] = '*';
        snowflake[size / 2][i] = '*';
        snowflake[i][i] = '*';
        snowflake[i][size - 1 - i] = '*';
    }

    // Вывод снежинки
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << snowflake[i][j];
        }
        std::cout << std::endl;
    }

    // Освобождение памяти
    for (int i = 0; i < size; i++) {
        delete[] snowflake[i];
    }
    delete[] snowflake;

    return 0;
}
