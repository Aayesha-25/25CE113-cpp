#include "Shape.h"
#include<iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter number of shapes: ";
    cin >> n;


    Shape* staticShapes[10];

    cout << "\n--- Static Input ---\n";
    for (int i = 0; i < n; i++) {
        int choice;
        cout << "1. Rectangle  2. Circle: ";
        cin >> choice;

        if (choice == 1) {
            float l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            staticShapes[i] = new Rectangle(l, w);
        }
        else {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            staticShapes[i] = new Circle(r);
        }
    }

    cout << "\n--- Areas (Static) ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Area = " << staticShapes[i]->area() << endl;
    }


    Shape** dynamicShapes = new Shape*[n];

    cout << "\n--- Dynamic Input ---\n";
    for (int i = 0; i < n; i++) {
        int choice;
        cout << "1. Rectangle  2. Circle: ";
        cin >> choice;

        if (choice == 1) {
            float l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            dynamicShapes[i] = new Rectangle(l, w);
        }
        else {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            dynamicShapes[i] = new Circle(r);
        }
    }

    cout << "\n--- Areas (Dynamic) ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Area = " << dynamicShapes[i]->area() << endl;
    }


    for (int i = 0; i < n; i++) {
        delete staticShapes[i];
        delete dynamicShapes[i];
    }
    delete[] dynamicShapes;

    return 0;
}
