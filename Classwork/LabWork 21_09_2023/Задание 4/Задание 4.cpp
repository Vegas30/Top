// Задание 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct Animal 
{
    string type;
    string name;
    int age;
};

void Fill(Animal& info)
{
    cout << "Заполните информацию о животном: " << endl;
    cout << "Вид животного: ";
    getline(cin, info.type); // Считываем строку с пробелами
    cout << "Имя: ";
    getline(cin, info.name); // Считываем строку с пробелами
    cout << "Возраст: ";
    cin >> info.age; // Считываем строку с пробелами
}


void Show(Animal& info)
{
    cout << "Информация о животном: " << endl;

    cout << "Вид животного: " << info.type << endl;
    cout << "Имя: " << info.name << endl;
    cout << "Возраст: " << info.age << endl;

    cout << "\n\n";
}

void MakeSound(const Animal& animal) 
{
    std::cout << animal.name << " издает звук: ";
    if (animal.type == "Собака") {
        std::cout << "Гав-гав!" << std::endl;
    }
    else if (animal.type == "Кошка") {
        std::cout << "Мяу-мяу!" << std::endl;
    }
    else {
        std::cout << "Неизвестный звук." << std::endl;
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "ru");

    // Создаем экземпляр структуры "Животное"
    Animal myPet;

    // Заполняем данные о животном
    Fill(myPet);

    // Выводим информацию о животном
    Show(myPet);

    // Подаем голос
    MakeSound(myPet);

    return 0;

}

