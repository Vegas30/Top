// Классы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

class Person
{
public:
    string name;
    string last_name;
    string middle_name;
    int age;
    string location;
    bool gender;
    string profession;

    void Print()
    {
        cout << "Пользователь: " << "\n" << name << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    Person Sylvester; // Sylvester - объект (экземпляр) класса Person

    // Пример заполнения атрибутов
    Sylvester.name = "Silvester";
    Sylvester.last_name = "Stalone";
    Sylvester.middle_name = "Frenk";
    Sylvester.age = 77;
    Sylvester.location = "USA";
    Sylvester.gender = 1;
    Sylvester.profession = "Acter";
    Sylvester.Print();




}
