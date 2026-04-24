#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
using namespace std;

class FileProcessor {
private:
    int charCount;
    int wordCount;
    int lineCount;

public:
    FileProcessor() {
        charCount = 0;
        wordCount = 0;
        lineCount = 0;
    }


    void processFile(const char* filename) {
        ifstream file(filename);

        if (!file) {
            cout << "Error: File cannot be opened!" << endl;
            return;
        }

        char ch;
        bool inWord = false;


        while (file.get(ch)) {


            charCount++;


            if (ch != ' ' && ch != '\n' && ch != '\t') {
                if (!inWord) {
                    wordCount++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }


            if (ch == '\n') {
                lineCount++;
            }
        }

        if (charCount > 0) {
            lineCount++;
        }

        file.close();
    }


    void display() {
        cout << "Total Characters: " << charCount << endl;
        cout << "Total Words: " << wordCount << endl;
        cout << "Total Lines: " << lineCount << endl;
    }
};

#endif
