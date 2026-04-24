#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iomanip>
using namespace std;


ostream& currency(ostream& out) {
    out << "Rs ";
    return out;
}

class Student {
public:
    char name[50];
    int marks;
    float fees;

    void input() {
        cout << "Enter name: ";
        cin.getline(name, 50);

        cout << "Enter marks: ";
        cin >> marks;

        cout << "Enter fees: ";
        cin >> fees;
        cin.ignore();
    }

    void display() {
        cout << left << setw(20) << name
             << right << setw(10) << marks
             << setw(10) << currency
             << fixed << setprecision(2) << fees
             << endl;
    }
};

#endif
