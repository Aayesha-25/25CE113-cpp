#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator {
private:
    float results[50];
    int index;

public:
    Calculator() {
        index = 0;
    }


    int add(int a, int b) {
        int res = a + b;
        results[index++] = res;
        return res;
    }

    float add(float a, float b) {
        float res = a + b;
        results[index++] = res;
        return res;
    }

    float add(int a, float b) {
        float res = a + b;
        results[index++] = res;
        return res;
    }

    float add(float a, int b) {
        float res = a + b;
        results[index++] = res;
        return res;
    }


    void displayResults() {
        cout << "\n--- All Results ---\n";
        for (int i = 0; i < index; i++) {
            cout << "Result " << i + 1 << " = " << results[i] << endl;
        }
    }
};

#endif
