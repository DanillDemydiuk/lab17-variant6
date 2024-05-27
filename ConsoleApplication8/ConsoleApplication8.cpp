#include <iostream>
#include "windows.h"

using namespace std;

// Базовий клас транспортні засоби
class Vehicle {
public:
    Vehicle() {
        cout << "Створення об'єкта класу Vehicle" << endl;
    }
    virtual ~Vehicle() {
        cout << "Знищення об'єкта класу Vehicle" << endl;
    }
    virtual void print() {
        cout << "Це транспортний засіб" << endl;
    }
};

// Похідний клас автомобіль
class Car : public Vehicle {
public:
    Car() {
        cout << "Створення об'єкта класу Car" << endl;
    }
    ~Car() {
        cout << "Знищення об'єкта класу Car" << endl;
    }
    void print() override {
        cout << "Це автомобіль" << endl;
    }
};

// Похідний клас вантажівка
class Truck : public Vehicle {
public:
    Truck() {
        cout << "Створення об'єкта класу Truck" << endl;
    }
    ~Truck() {
        cout << "Знищення об'єкта класу Truck" << endl;
    }
    void print() override {
        cout << "Це вантажівка" << endl;
    }
};

// Похідний клас пароплав
class Steamship : public Vehicle {
public:
    Steamship() {
        cout << "Створення об'єкта класу Steamship" << endl;
    }
    ~Steamship() {
        cout << "Знищення об'єкта класу Steamship" << endl;
    }
    void print() override {
        cout << "Це пароплав" << endl;
    }
};

// Похідний клас літак
class Airplane : public Vehicle {
public:
    Airplane() {
        cout << "Створення об'єкта класу Airplane" << endl;
    }
    ~Airplane() {
        cout << "Знищення об'єкта класу Airplane" << endl;
    }
    void print() override {
        cout << "Це літак" << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Vehicle* vehicles[] = {
        new Car(),
        new Truck(),
        new Steamship(),
        new Airplane()
    };

    for (Vehicle* vehicle : vehicles) {
        vehicle->print();
        delete vehicle;
    }

    return 0;
}