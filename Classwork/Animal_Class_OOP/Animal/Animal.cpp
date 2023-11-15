// Animal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;
    double weight;

public:
    Animal(const std::string name, int age, double weight) : name(name), age(age), weight(weight) {}

    virtual void makeSound() const = 0;

    virtual void displayInfo() const {
        std::cout << "Животное: " << name << ", Возраст: " << age << " лет, Вес: " << weight << " кг" << std::endl;
    }

    virtual double calculateVaccineDose() const = 0; 
};

class Dog : public Animal {
private:
    std::string breed;
    double vaccineDose = 0.05;

public:
    Dog(const std::string name, int age, double weight, const std::string breed) : Animal(name, age, weight), breed(breed) {}

    void makeSound() const override {
        std::cout << "Гав-гав!" << std::endl;
    }

    void displayInfo() const override {
        Animal::displayInfo();
        std::cout << "Порода: " << breed << std::endl;
    }

    double calculateVaccineDose() const override {
        return weight * vaccineDose;
    }
};

class Cat : public Animal {
private:
    bool hasTail;
    double vaccineDose = 0.03;

public:
    Cat(const std::string name, int age, double weight, bool hasTail) : Animal(name, age, weight), hasTail(hasTail) {}

    void makeSound() const override {
        std::cout << "Мяу!" << std::endl;
    }

    void displayInfo() const override {
        Animal::displayInfo();
        std::cout << "Хвост: " << (hasTail ? "есть" : "отсутствует") << std::endl;
    }

    double calculateVaccineDose() const override {
        return weight * vaccineDose;
    }
};

class Bird : public Animal {
private:
    std::string species;
    double vaccineDose = 0.03;

public:
    Bird(const std::string name, int age, double weight, const std::string species) : Animal(name, age, weight), species(species) {}

    void makeSound() const override {
        std::cout << "Чирик-чирик!" << std::endl;
    }

    void displayInfo() const override {
        Animal::displayInfo();
        std::cout << "Вид: " << species << std::endl;
    }

    double calculateVaccineDose() const override {
        return weight * vaccineDose;
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    Dog dog("Барон", 3, 15.0, "Лабрадор");
    Cat cat("Мурка", 5, 5.0, true);
    Bird bird("Чижик", 2, 0.5, "Воробей");

    std::cout << "Информация о животных:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    dog.displayInfo();
    std::cout << "Доза вакцины: " << dog.calculateVaccineDose() << " мл" << std::endl;
    dog.makeSound();
    std::cout << "-------------------------" << std::endl;
    cat.displayInfo();
    std::cout << "Доза вакцины: " << cat.calculateVaccineDose() << " мл" << std::endl;
    cat.makeSound();
    std::cout << "-------------------------" << std::endl;
    bird.displayInfo();
    std::cout << "Доза вакцины: " << bird.calculateVaccineDose() << " мл" << std::endl;
    bird.makeSound();
    std::cout << "-------------------------" << std::endl;

    return 0;
}
