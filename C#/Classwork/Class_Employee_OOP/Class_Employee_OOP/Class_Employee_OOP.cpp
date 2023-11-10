// Class_Employee_OOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Employee {
protected:
    std::string name;
    double basePay;

public:
    Employee(const std::string name, double basePay) : name(name), basePay(basePay) {}

    virtual double calculatePay() const {
        return basePay;
    }

    virtual void displayInfo() const {
        std::cout << "name: " << name << ", base pay: " << basePay << std::endl;
    }
};

class Manager : Employee {
private:
    double bonus;

public:
    Manager(const std::string name, double basePay, double bonus) : Employee(name, basePay), bonus(bonus) 
    {
    
    }

    double calculatePay() const override {
        return basePay + bonus;
    }

    void displayInfo() const override {
        std::cout << "name: " << name << ", base pay: " << basePay << ", bonus: " << bonus << std::endl;
    }
};

class Worker : public Employee {
public:
    Worker(const std::string name, double basePay) : Employee(name, basePay) {}
};

int main()
{
    Manager manager("John", 5000, 2000);
    Worker worker("July", 3000);

    manager.displayInfo();
    worker.displayInfo();

    system("pause");
}