// Exercise_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Contact {
private:
    std::string* fullName;
    std::string homePhone;
    std::string workPhone;
    std::string mobilePhone;
    std::string additionalInfo;

public:
    // Конструктор класса
    Contact(const std::string& name, const std::string& home, const std::string& work, const std::string& mobile, const std::string& info)
        : fullName(new std::string(name)), homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(info) {}

    // Деструктор класса
    ~Contact() {
        delete fullName;
    }

    // Функция для вывода контакта
    void display() const {
        std::cout << "ФИО: " << *fullName << std::endl;
        std::cout << "Домашний телефон: " << homePhone << std::endl;
        std::cout << "Рабочий телефон: " << workPhone << std::endl;
        std::cout << "Мобильный телефон: " << mobilePhone << std::endl;
        std::cout << "Дополнительная информация: " << additionalInfo << std::endl;
    }

    // Функции-члены для получения данных
    const std::string& getName() const {
        return *fullName;
    }

    const std::string& getHomePhone() const {
        return homePhone;
    }

    const std::string& getWorkPhone() const {
        return workPhone;
    }

    const std::string& getMobilePhone() const {
        return mobilePhone;
    }

    const std::string& getAdditionalInfo() const {
        return additionalInfo;
    }
};

class PhoneBook {
private:
    std::vector<Contact*> contacts;

public:
    // Добавление нового абонента
    void addContact(Contact* contact) {
        contacts.push_back(contact);
    }

    // Удаление абонента по ФИО
    void removeContact(const std::string& name) {
        for (auto it = contacts.begin(); it != contacts.end(); ++it) {
            if ((*it)->getName() == name) {
                delete* it;
                contacts.erase(it);
                break;
            }
        }
    }

    // Поиск абонента по ФИО
    void searchContact(const std::string& name) const {
        for (const auto& contact : contacts) {
            if (contact->getName() == name) {
                contact->display();
                return;
            }
        }
        std::cout << "Абонент с именем " << name << " не найден." << std::endl;
    }

    // Показать все контакты
    void displayAllContacts() const {
        for (const auto& contact : contacts) {
            contact->display();
            std::cout << std::endl;
        }
    }

    // Сохранить контакты в файл
    void saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            for (const auto& contact : contacts) {
                outFile << contact->getName() << std::endl;
                outFile << contact->getHomePhone() << std::endl;
                outFile << contact->getWorkPhone() << std::endl;
                outFile << contact->getMobilePhone() << std::endl;
                outFile << contact->getAdditionalInfo() << std::endl;
            }
            outFile.close();
            std::cout << "Контакты успешно сохранены в файл " << filename << std::endl;
        }
        else {
            std::cout << "Ошибка при открытии файла." << std::endl;
        }
    }

    // Загрузить контакты из файла
    void loadFromFile(const std::string& filename) {
        std::ifstream inFile(filename);
        if (inFile.is_open()) {
            std::string name, home, work, mobile, info;
            while (getline(inFile, name)) {
                getline(inFile, home);
                getline(inFile, work);
                getline(inFile, mobile);
                getline(inFile, info);
                Contact* contact = new Contact(name, home, work, mobile, info);
                contacts.push_back(contact);
            }
            inFile.close();
            std::cout << "Контакты успешно загружены из файла " << filename << std::endl;
        }
        else {
            std::cout << "Ошибка при открытии файла." << std::endl;
        }
    }

    // Деструктор класса
    ~PhoneBook() {
        for (const auto& contact : contacts) {
            delete contact;
        }
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    PhoneBook phoneBook;
    int choice;

    do {
        std::cout << "1. Добавить новый контакт" << std::endl;
        std::cout << "2. Удалить контакт" << std::endl;
        std::cout << "3. Найти контакт по ФИО" << std::endl;
        std::cout << "4. Показать все контакты" << std::endl;
        std::cout << "5. Сохранить контакты в файл" << std::endl;
        std::cout << "6. Загрузить контакты из файла" << std::endl;
        std::cout << "0. Выйти" << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> choice;
        std::cin.ignore(); // Очистка буфера ввода

        switch (choice) {
        case 1: {
            std::string name, home, work, mobile, info;
            std::cout << "Введите ФИО: ";
            getline(std::cin, name);
            std::cout << "Введите домашний телефон: ";
            getline(std::cin, home);
            std::cout << "Введите рабочий телефон: ";
            getline(std::cin, work);
            std::cout << "Введите мобильный телефон: ";
            getline(std::cin, mobile);
            std::cout << "Введите дополнительную информацию: ";
            getline(std::cin, info);
            Contact* newContact = new Contact(name, home, work, mobile, info);
            phoneBook.addContact(newContact);
            std::cout << "Контакт добавлен." << std::endl;
            break;
        }
        case 2: {
            std::string name;
            std::cout << "Введите ФИО контакта для удаления: ";
            getline(std::cin, name);
            phoneBook.removeContact(name);
            std::cout << "Контакт удален." << std::endl;
            break;
        }
        case 3: {
            std::string name;
            std::cout << "Введите ФИО контакта для поиска: ";
            getline(std::cin, name);
            phoneBook.searchContact(name);
            break;
        }
        case 4:
            std::cout << "Список всех контактов:" << std::endl;
            phoneBook.displayAllContacts();
            break;
        case 5: {
            std::string filename;
            std::cout << "Введите имя файла для сохранения: ";
            getline(std::cin, filename);
            phoneBook.saveToFile(filename);
            break;
        }
        case 6: {
            std::string filename;
            std::cout << "Введите имя файла для загрузки: ";
            getline(std::cin, filename);
            phoneBook.loadFromFile(filename);
            break;
        }
        case 0:
            std::cout << "До свидания!" << std::endl;
            break;
        default:
            std::cout << "Неверный ввод. Попробуйте снова." << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
