#include "Calculator.h"

int main() {
    Calculator calc;
    int choice;

    do {
        cout << "\n1. Add int + int\n";
        cout << "2. Add float + float\n";
        cout << "3. Add int + float\n";
        cout << "4. Add float + int\n";
        cout << "5. Show Results\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result = " << calc.add(a, b) << endl;
                break;
            }

            case 2: {
                float a, b;
                cout << "Enter two floats: ";
                cin >> a >> b;
                cout << "Result = " << calc.add(a, b) << endl;
                break;
            }

            case 3: {
                int a;
                float b;
                cout << "Enter int and float: ";
                cin >> a >> b;
                cout << "Result = " << calc.add(a, b) << endl;
                break;
            }

            case 4: {
                float a;
                int b;
                cout << "Enter float and int: ";
                cin >> a >> b;
                cout << "Result = " << calc.add(a, b) << endl;
                break;
            }

            case 5:
                calc.displayResults();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
