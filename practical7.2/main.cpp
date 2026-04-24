#include "Complex.h"

int main() {
    Complex c1, c2, result[10];
    int choice, index = 0;

    do {
        cout << "\n1. Add Complex Numbers\n";
        cout << "2. Subtract Complex Numbers\n";
        cout << "3. Show All Results\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nEnter First Complex Number:\n";
                c1.input();

                cout << "Enter Second Complex Number:\n";
                c2.input();

                result[index] = c1 + c2;
                cout << "Result = ";
                result[index].display();
                index++;
                break;

            case 2:
                cout << "\nEnter First Complex Number:\n";
                c1.input();

                cout << "Enter Second Complex Number:\n";
                c2.input();

                result[index] = c1 - c2;
                cout << "Result = ";
                result[index].display();
                index++;
                break;

            case 3:
                cout << "\n--- All Results ---\n";
                for (int i = 0; i < index; i++) {
                    cout << "Result " << i + 1 << " = ";
                    result[i].display();
                }
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
