// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать программу "справочник". Создать два одномерных массива. 
Один массив хранит номера мобильных телефонов, второй - домашние телефонные номера. 
Реализовать меню для пользователя: 
1) Отсортировать по номерам модильных. 
2) Отсортировать по домашним номерам. 
3) Вывести данные пользователя. 
4) Выход. */

#include <iostream>
#include <algorithm>
#include <string>

const int MAX_CONTACTS = 100;

struct Contact {
    std::string name;
    std::string mobileNumber;
    std::string homeNumber;
};

bool compareMobileNumbers(const Contact& contact1, const Contact& contact2) {
    return contact1.mobileNumber < contact2.mobileNumber;
}

bool compareHomeNumbers(const Contact& contact1, const Contact& contact2) {
    return contact1.homeNumber < contact2.homeNumber;
}

void displayContact(const Contact& contact) {
    std::cout << "Name: " << contact.name << std::endl;
    std::cout << "Mobile Number: " << contact.mobileNumber << std::endl;
    std::cout << "Home Number: " << contact.homeNumber << std::endl;
}

int main() {
    Contact contacts[MAX_CONTACTS];
    int contactCount = 0;

    while (contactCount < MAX_CONTACTS) {
        std::cout << "Enter contact name (or type 'exit' to finish): ";
        std::getline(std::cin, contacts[contactCount].name);

        if (contacts[contactCount].name == "exit") {
            break;
        }

        std::cout << "Enter mobile number: ";
        std::getline(std::cin, contacts[contactCount].mobileNumber);

        std::cout << "Enter home number: ";
        std::getline(std::cin, contacts[contactCount].homeNumber);

        ++contactCount;
    }

    int choice;
    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1) Sort by mobile numbers\n";
        std::cout << "2) Sort by home numbers\n";
        std::cout << "3) Display contacts\n";
        std::cout << "4) Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::sort(contacts, contacts + contactCount, compareMobileNumbers);
            std::cout << "Contacts sorted by mobile numbers." << std::endl;
            break;
        case 2:
            std::sort(contacts, contacts + contactCount, compareHomeNumbers);
            std::cout << "Contacts sorted by home numbers." << std::endl;
            break;
        case 3:
            for (int i = 0; i < contactCount; ++i) {
                std::cout << "\nContact " << i + 1 << ":\n";
                displayContact(contacts[i]);
            }
            break;
        case 4:
            std::cout << "Exiting program." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }

    return 0;
}
