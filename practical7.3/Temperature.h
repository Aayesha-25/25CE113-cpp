#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

class Fahrenheit;


class Celsius {
private:
    float temp;

public:
    Celsius(float t = 0) {
        temp = t;
    }

    float getTemp() {
        return temp;
    }


    operator Fahrenheit();


    bool operator==(Celsius c) {
        return temp == c.temp;
    }

    void display() {
        cout << temp << " °C";
    }
};


class Fahrenheit {
private:
    float temp;

public:
    Fahrenheit(float t = 0) {
        temp = t;
    }

    float getTemp() {
        return temp;
    }


    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9);
    }


    bool operator==(Fahrenheit f) {
        return temp == f.temp;
    }

    void display() {
        cout << temp << " °F";
    }
};


inline Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

#endif
