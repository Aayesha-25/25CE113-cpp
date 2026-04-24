#include "Shape.h"

int main() {
    int n;

    cout << "Enter number of circles: ";
    cin >> n;

    Circle staticCircles[10];

    cout << "\n--- Static Method ---\n";
    for (int i = 0; i < n; i++) {
        float r;
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> r;
        staticCircles[i].setRadius(r);
    }

    cout << "\nAreas (Static):\n";
    for (int i = 0; i < n; i++) {
        cout << "Circle " << i + 1
             << " Area = " << staticCircles[i].area() << endl;
    }


    Circle* dynamicCircles = new Circle[n];

    cout << "\n--- Dynamic Method ---\n";
    for (int i = 0; i < n; i++) {
        float r;
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> r;
        dynamicCircles[i].setRadius(r);
    }

    cout << "\nAreas (Dynamic):\n";
    for (int i = 0; i < n; i++) {
        cout << "Circle " << i + 1
             << " Area = " << dynamicCircles[i].area() << endl;
    }


    delete[] dynamicCircles;

    return 0;
}
