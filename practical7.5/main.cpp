#include "GradingSystem.h"

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Grading* students[10]; // base class pointer array

    // Input
    for (int i = 0; i < n; i++) {
        int type;
        float marks;

        cout << "\nStudent " << i + 1 << endl;
        cout << "1. Undergraduate  2. Postgraduate: ";
        cin >> type;

        cout << "Enter marks: ";
        cin >> marks;

        if (type == 1)
            students[i] = new Undergraduate(marks);
        else
            students[i] = new Postgraduate(marks);
    }

    // Display all
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        students[i]->display(); // polymorphism
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete students[i];
    }

    return 0;
}
