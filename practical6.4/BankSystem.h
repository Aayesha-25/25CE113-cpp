#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include <iostream>
using namespace std;


class Account {
protected:
    int accNo;
    float balance;


    float history[50];
    int top;

public:
    Account(int a = 0, float b = 0) {
        accNo = a;
        balance = b;
        top = -1;
    }

    void deposit(float amt) {
        balance += amt;
        history[++top] = amt;
    }


    void withdraw(float amt) {
        if (amt <= balance) {
            balance -= amt;
            history[++top] = -amt;
        } else {
            cout << "Insufficient balance!\n";
        }
    }


    void undo() {
        if (top >= 0) {
            float last = history[top--];
            balance -= last;
            cout << "Last transaction undone.\n";
        } else {
            cout << "No transaction to undo.\n";
        }
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};


class Savings : public Account {
private:
    float interestRate;

public:
    Savings(int a = 0, float b = 0, float r = 0)
        : Account(a, b) {
        interestRate = r;
    }

    void display() {
        Account::display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class Current : public Account {
private:
    float overdraftLimit;

public:
    Current(int a = 0, float b = 0, float o = 0)
        : Account(a, b) {
        overdraftLimit = o;
    }

    void withdraw(float amt) {
        if (amt <= balance + overdraftLimit) {
            balance -= amt;
            history[++top] = -amt;
        } else {
            cout << "Overdraft limit exceeded!\n";
        }
    }

    void display() {
        Account::display();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

#endif
