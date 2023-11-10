// Animal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Animal {
private:
    std::string name;
    std::string food;

public:
    Animal(const std::string name, const std::string food) : name(name), food(food) {}

    virtual void makeSound() const {
       // std::cout << "Some sound from an animal" << std::endl;
    }

    void printName() {
        std::cout << "This is " << name << std::endl;
    }
};

class Cat : Animal {
public:
    Cat(const std::string name, const std::string food) : Animal(name, food) {}

    void makeSound() const override {
        std::cout << "meow" << std::endl;
    }
};

class Dog : Animal {
public:
    Dog(const std::string name, const std::string food) : Animal(name, food) {}

    void makeSound() const override {
        std::cout << "woof" << std::endl;
    }
};

class Bird : Animal {
public:
    Bird(const std::string name, const std::string food) : Animal(name, food) {}

    void makeSound() const override {
        std::cout << "Twit-twit" << std::endl;
    }
};

int main()
{
    Cat cat("Cat","Fish");
    Dog dog("Buddy","Meat");
    Bird bird("Kanareik","Seed");

    cat.makeSound();
    dog.makeSound();
    bird.makeSound();
}


