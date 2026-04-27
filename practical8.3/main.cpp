#include "BankSystem.h"

int main() {
    Logger log;

    BankAccount acc(1000, &log);

    float amount;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    try {
        log.add("Entered main try block");

        startTransaction(acc, amount, log);

        log.add("Transaction completed successfully");
    }

    catch (const char* msg) {
        log.add("Exception caught in main");
        cout << "Error: " << msg << endl;
    }

    log.add("Exiting main");

    // Show logs (demonstrates stack unwinding)
    log.show();

    return 0;
}
