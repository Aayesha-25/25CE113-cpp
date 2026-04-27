#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class FileProcessor {
public:
    void processFile() {
        string filename;
        ifstream file;


        while (true) {
            cout << "Enter file name (or type exit): ";
            cin >> filename;

            if (filename == "exit")
                return;

            file.open(filename);

            if (!file) {
                cout << "Error: File not found! Try again.\n";
            } else {
                break;
            }
        }

        string line;
        int lineNo = 0;

        cout << "\n--- Processing File ---\n";

        while (getline(file, line)) {
            lineNo++;

            stringstream ss(line);
            float num, sum = 0;
            int count = 0;
            bool valid = true;

            while (ss >> num) {
                sum += num;
                count++;
            }

            // Check if line had invalid data
            if (ss.fail() && !ss.eof()) {
                valid = false;
            }

            if (!valid || count == 0) {
                cout << "Line " << lineNo << " is invalid to skipped\n";
            } else {
                cout << "Line " << lineNo
                     << " to Sum = " << sum
                     << ", Avg = " << (sum / count) << endl;
            }
        }

        file.close();
    }
};

#endif
