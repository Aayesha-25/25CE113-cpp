#include "carSystem.h"

int main() {
    int n;

    cout << "Enter number of cars: ";
    cin >> n;


    Car cars[10];

    cout << "\n--- Enter Car Details (Static) ---\n";
    for (int i = 0; i < n; i++) {
        char fuel[20], brand[30];

        cout << "Car " << i + 1 << endl;

        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter fuel type: ";
        cin >> fuel;

        cars[i] = Car(fuel, brand);
    }

    cout << "\n--- Static Display ---\n";
    for (int i = 0; i < n; i++) {
        cars[i].displayCar();
    }

    Car queue[10];
    int front = 0, rear = -1;

    cout << "\n--- Enter Car Details (Queue) ---\n";
    for (int i = 0; i < n; i++) {
        char fuel[20], brand[30];

        cout << "Car " << i + 1 << endl;

        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter fuel type: ";
        cin >> fuel;

        rear++;
        queue[rear] = Car(fuel, brand);

    cout << "\n--- Processing Queue ---\n";
    while (front <= rear) {
        queue[front].displayCar();
        front++;
    }
    }
    return 0;
}
