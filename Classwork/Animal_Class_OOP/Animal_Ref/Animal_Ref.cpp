// Animal_Ref.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;
    double weight;
    double vaccineDose;

public:
    Animal(const std::string name, int age, double weight) : name(name), age(age), weight(weight), vaccineDose(0.0) {}

    virtual void makeSound() const = 0;

    virtual void displayInfo() const {
        std::cout << "Животное: " << name << ", Возраст: " << age << " лет, Вес: " << weight << " кг" << std::endl;
    }

    virtual void calculateVaccineDose(Animal& animal) = 0;

    double getVaccineDose() const {
        return vaccineDose;
    }
};

class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(const std::string& name, int age, double weight, const std::string& breed) : Animal(name, age, weight), breed(breed) {}

    void makeSound() const override {
        std::cout << "Гав-гав!" << std::endl;
    }

    void displayInfo() const override {
        Animal::displayInfo();
        std::cout << "Порода: " << breed << std::endl;
    }

    void calculateVaccineDose(Animal& animal) override {
        vaccineDose = weight * 0.05;


    }
};

int main() {
    setlocale(LC_ALL, "ru");

    Dog dog("Барон", 3, 15.0, "Лабрадор");

    std::cout << "Информация о собаке:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    dog.displayInfo();
    dog.calculateVaccineDose(dog);
    std::cout << "Доза вакцины: " << dog.getVaccineDose() << " мл" << std::endl;
    dog.makeSound();
    std::cout << "-------------------------" << std::endl;

    return 0;
}
