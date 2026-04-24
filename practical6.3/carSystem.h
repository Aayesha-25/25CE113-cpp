#ifndef CARSYSTEM_H
#define CARSYSTEM_H

#include <iostream>
#include <cstring>
using namespace std;


class Fuel {
protected:
    char fuelType[20];

public:
    Fuel(const char* f = "") {
        strcpy(fuelType, f);
    }

    void displayFuel() {
        cout << "Fuel Type: " << fuelType << endl;
    }
};


class Brand {
protected:
    char brandName[30];

public:
    Brand(const char* b = "") {
        strcpy(brandName, b);
    }

    void displayBrand() {
        cout << "Brand: " << brandName << endl;
    }
};


class Car : public Fuel, public Brand {
public:
    Car(const char* f = "", const char* b = "")
        : Fuel(f), Brand(b) {}

    void displayCar() {
        displayBrand();
        displayFuel();
        cout << "----------------------\n";
    }
};

#endif
