// LabWork_Classes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Animal {
private:
    std::string name;

public:
    Animal(const std::string name) : name(name) {}

    virtual void makeSound() const {
        //std::cout << "Some sound from an animal" << std::endl;
    }

    void printName() {
        std::cout << "This is " << name << std::endl;
    }
};

class Cat : Animal {
public:
    Cat(const std::string name) : Animal(name) {}

    void makeSound() const override {
        std::cout << "meow" << std::endl;
    }
};

class Dog : Animal {
public:
    Dog(const std::string name) : Animal(name) {}

    void makeSound() const override {
        std::cout << "woof" << std::endl;
    }
};

int main()
{
    Cat cat("Cat");
    Dog dog("Buddy");

    cat.makeSound();
    dog.makeSound();
}