#ifndef DIVISIONHANDLER_H
#define DIVISIONHANDLER_H

#include <iostream>
#include <limits>
using namespace std;

class DivisionHandler {
public:
    void performDivision() {
        int a, b;

        try {
            cout << "Enter numerator: ";
            cin >> a;


            if (cin.fail()) {
                throw "Invalid input for numerator!";
            }

            cout << "Enter denominator: ";
            cin >> b;


            if (cin.fail()) {
                throw "Invalid input for denominator!";
            }

            if (b == 0) {
                throw "Error: Division by zero!";
            }


            cout << "Result = " << (a / b) << endl;
        }

        catch (const char* msg) {
            cout << msg << endl;


            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
};

#endif
