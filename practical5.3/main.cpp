#include "inventory.h"

int main() {
    Inventory inv;
    int choice;

    do {
        cout << "\n1. Add Item\n2. View Items\n3. Search Item\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inv.addItem("inventory.txt");
                break;
            case 2:
                inv.viewItems("inventory.txt");
                break;
            case 3:
                inv.searchItem("inventory.txt");
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
