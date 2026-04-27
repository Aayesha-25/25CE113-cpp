#ifndef SQRTHANDLER_H
#define SQRTHANDLER_H

#include <iostream>
#include <cmath>
using namespace std;


class NegativeNumberException {
private:
    float value;

public:
    NegativeNumberException(float v) {
        value = v;
    }

    void showError() {
        cout << "Error: Cannot compute square root of negative number ("
             << value << ")" << endl;
    }
};


class SqrtHandler {
public:
    void compute() {
        float num;

        try {
            cout << "Enter number: ";
            cin >> num;


            if (cin.fail()) {
                throw "Invalid input!";
            }

            if (num < 0) {
                throw NegativeNumberException(num);
            }


            cout << "Square root = " << sqrt(num) << endl;
        }

        catch (NegativeNumberException e) {
            e.showError();
        }

        catch (const char* msg) {
            cout << msg << endl;
        }


        cin.clear();
        cin.ignore(1000, '\n');
    }
};

#endif
