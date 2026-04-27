#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include <iostream>
using namespace std;


class Logger {
private:
    string logs[100];
    int index;

public:
    Logger() {
        index = 0;
    }

    void add(string msg) {
        logs[index++] = msg;
    }

    void show() {
        cout << "\n--- Transaction Log ---\n";
        for (int i = 0; i < index; i++) {
            cout << logs[i] << endl;
        }
    }
};

class BankAccount {
private:
    float balance;
    Logger* logger;

public:
    BankAccount(float b, Logger* log) {
        balance = b;
        logger = log;
    }

    void deposit(float amt) {
        logger->add("Entered deposit()");

        if (amt <= 0) {
            throw "Invalid deposit amount!";
        }

        balance += amt;
        logger->add("Deposit successful");

        logger->add("Exiting deposit()");
    }

    void withdraw(float amt) {
        logger->add("Entered withdraw()");

        if (amt > balance) {
            throw "Insufficient balance!";
        }

        balance -= amt;
        logger->add("Withdraw successful");

        logger->add("Exiting withdraw()");
    }

    float getBalance() {
        return balance;
    }
};



void processTransaction(BankAccount& acc, float amt, Logger& log) {
    log.add("Entered processTransaction()");
    acc.withdraw(amt);  // may throw
    log.add("Exiting processTransaction()");
}

void startTransaction(BankAccount& acc, float amt, Logger& log) {
    log.add("Entered startTransaction()");
    processTransaction(acc, amt, log);  // may throw
    log.add("Exiting startTransaction()");
}

#endif
