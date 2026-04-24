#include "BankSystem.h"

int main() {
    int choice, type;

    cout << "Select Account Type:\n";
    cout << "1. Savings Account\n2. Current Account\n";
    cin >> type;

    if (type == 1) {
        int accNo;
        float balance, rate;

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Enter Interest Rate: ";
        cin >> rate;

        Savings acc(accNo, balance, rate);

        do {
            cout << "\n--- Savings Menu ---\n";
            cout << "1. Deposit\n2. Withdraw\n3. Display\n4. Undo\n5. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    float amt;
                    cout << "Enter amount: ";
                    cin >> amt;
                    acc.deposit(amt);
                    break;
                }
                case 2: {
                    float amt;
                    cout << "Enter amount: ";
                    cin >> amt;
                    acc.withdraw(amt);
                    break;
                }
                case 3:
                    acc.display();
                    break;

                case 4:
                    acc.undo();
                    break;

                case 5:
                    cout << "Exiting...\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }

        } while (choice != 5);
    }

    else if (type == 2) {
        int accNo;
        float balance, overdraft;

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Enter Overdraft Limit: ";
        cin >> overdraft;

        Current acc(accNo, balance, overdraft);

        do {
            cout << "\n--- Current Menu ---\n";
            cout << "1. Deposit\n2. Withdraw\n3. Display\n4. Undo\n5. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    float amt;
                    cout << "Enter amount: ";
                    cin >> amt;
                    acc.deposit(amt);
                    break;
                }
                case 2: {
                    float amt;
                    cout << "Enter amount: ";
                    cin >> amt;
                    acc.withdraw(amt);
                    break;
                }
                case 3:
                    acc.display();
                    break;

                case 4:
                    acc.undo();
                    break;

                case 5:
                    cout << "Exiting...\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }

        } while (choice != 5);
    }

    else {
        cout << "Invalid account type!\n";
    }

    return 0;
}
