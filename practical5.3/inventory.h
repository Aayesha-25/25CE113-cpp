#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Item {
public:
    char name[50];
    int quantity;
    float price;
};

class Inventory {
public:


    void addItem(const char* filename) {
        ofstream file(filename, ios::app);

        if (!file) {
            cout << "Error opening file!" << endl;
            return;
        }

        Item it;

        cout << "Enter item name: ";
        cin >> it.name;

        cout << "Enter quantity: ";
        cin >> it.quantity;

        cout << "Enter price: ";
        cin >> it.price;


        file << it.name << " " << it.quantity << " " << it.price << endl;

        file.close();
        cout << "Item added successfully!\n";
    }


    void viewItems(const char* filename) {
        ifstream file(filename);

        if (!file) {
            cout << "Error opening file!" << endl;
            return;
        }

        Item it;

        cout << "\n--- Inventory List ---\n";

        while (file >> it.name >> it.quantity >> it.price) {
            cout << "Name: " << it.name
                 << " | Qty: " << it.quantity
                 << " | Price: " << it.price << endl;
        }

        file.close();
    }

    void searchItem(const char* filename) {
        ifstream file(filename);

        if (!file) {
            cout << "Error opening file!" << endl;
            return;
        }

        char searchName[50];
        bool found = false;

        cout << "Enter item name to search: ";
        cin >> searchName;

        Item it;

        while (file >> it.name >> it.quantity >> it.price) {

            if (strcmp(it.name, searchName) == 0) {
                cout << "Item Found!\n";
                cout << "Name: " << it.name
                     << " | Qty: " << it.quantity
                     << " | Price: " << it.price << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Item not found!\n";
        }

        file.close();
    }
};

#endif
