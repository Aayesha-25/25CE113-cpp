#include "Temperature.h"

int main() {
    int choice;
    int fronte = 0, rear = -1;

    Celsius cArr[10];
    Fahrenheit fQueue[10];
    int count = 0;

    do {
        cout << "\n1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Compare Temperatures\n";
        cout << "4. Show Stored Values\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                float t;
                cout << "Enter Celsius: ";
                cin >> t;

                Celsius c(t);
                Fahrenheit f = c;

                cout << "Converted: ";
                f.display();
                cout << endl;

                cArr[count++] = c;

                rear++;
                fQueue[rear] = f;
                break;
            }

            case 2: {
                float t;
                cout << "Enter Fahrenheit: ";
                cin >> t;

                Fahrenheit f(t);
                Celsius c = f;

                cout << "Converted: ";
                c.display();
                cout << endl;

                cArr[count++] = c;

                rear++;
                fQueue[rear] = f;
                break;
            }

            case 3: {
                float t1, t2;
                cout << "Enter two Celsius values: ";
                cin >> t1 >> t2;

                Celsius c1(t1), c2(t2);

                if (c1 == c2)
                    cout << "Temperatures are equal\n";
                else
                    cout << "Temperatures are NOT equal\n";
                break;
            }

            case 4: {
                cout << "\n--- Static Celsius Values ---\n";
                for (int i = 0; i < count; i++) {
                    cArr[i].display();
                    cout << endl;
                }

                cout << "\n--- Queue (Fahrenheit FIFO) ---\n";
                for (int i = fronte; i <= rear; i++) {
                    fQueue[i].display();
                    cout << endl;
                }
                break;
            }

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
