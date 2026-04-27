#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    cout<<"Program Started\n";
    map<string, vector<string>> directory;
    int choice;
    string folder, file;

    do {
        cout << "\n--- Directory Menu ---\n";
        cout << "1. Add Folder\n";
        cout << "2. Add File to Folder\n";
        cout << "3. Display Directory\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter folder name: ";
            cin >> folder;

            if (directory.find(folder) != directory.end()) {
                cout << "Folder already exists!\n";
            } else {
                directory[folder] = vector<string>();
                cout << "Folder added.\n";
            }
            break;

        case 2:
            cout << "Enter folder name: ";
            cin >> folder;

            if (directory.find(folder) == directory.end()) {
                cout << "Folder not found!\n";
            } else {
                cout << "Enter file name: ";
                cin >> file;

                directory[folder].push_back(file);
                cout << "File added.\n";
            }
            break;

        case 3:
            cout << "\n--- Directory Contents ---\n";

            for (auto it = directory.begin(); it != directory.end(); it++) {
                cout << "Folder: " << it->first << endl;

                vector<string>& files = it->second;

                if (files.empty()) {
                    cout << "  (No files)\n";
                } else {
                    for (auto fit = files.begin(); fit != files.end(); fit++) {
                        cout << "  - " << *fit << endl;
                    }
                }
            }
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
