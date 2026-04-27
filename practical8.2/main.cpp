#include "SqrtHandler.h"

int main() {
    SqrtHandler s;
    int choice;

    do {
        s.compute();

        cout << "\nTry again? (1 = Yes / 0 = No): ";
        cin >> choice;

    } while (choice == 1);

    return 0;
}
