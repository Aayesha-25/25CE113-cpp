#include <iostream>
using namespace std;

class Account
{
    string customer_name;
    int account_id;
    double balance;

public:

    // Default Constructor
    Account()
    {
        customer_name = "Default User";
        account_id = 0;
        balance = 0.0;
    }

    // Parameterized Constructor
    Account(int id, string name, double bal)
    {
        if(id <= 0 || bal < 0)
        {
            cout << "Invalid Account Details!\n";
            account_id = 0;
            customer_name = "Invalid";
            balance = 0;
        }
        else
        {
            account_id = id;
            customer_name = name;
            balance = bal;
        }
    }

    // Deposit Function
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Deposit Successful!\n";
        }
        else
        {
            cout << "Invalid Deposit Amount!\n";
        }
    }

    // Withdraw Function
    void withdraw(double amount)
    {
        if(amount <= 0)
        {
            cout << "Invalid Withdrawal Amount!\n";
        }
        else if(amount > balance)
        {
            cout << "Insufficient Balance!\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
    }

    // Display Account Summary
    void display()
    {
        cout << "\n----- Account Summary -----\n";
        cout << "Customer Name : " << customer_name << endl;
        cout << "Account ID    : " << account_id << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of accounts to create: ";
    cin >> n;

    Account acc[n];   // Array of objects

    for(int i = 0; i < n; i++)
    {
        string name;
        int id;
        double bal;

        cout << "\nEnter details for Account " << i+1 << endl;

        cout << "Customer Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Account ID: ";
        cin >> id;

        cout << "Initial Balance: ";
        cin >> bal;

        acc[i] = Account(id, name, bal);

        int choice;
        do
        {
            cout << "\n1. Deposit\n2. Withdraw\n3. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            if(choice == 1)
            {
                double amt;
                cout << "Enter deposit amount: ";
                cin >> amt;
                acc[i].deposit(amt);
            }
            else if(choice == 2)
            {
                double amt;
                cout << "Enter withdrawal amount: ";
                cin >> amt;
                acc[i].withdraw(amt);
            }

        } while(choice != 3);
    }

    cout << "\n\n====== ALL ACCOUNT SUMMARIES ======\n";

    for(int i = 0; i < n; i++)
    {
        acc[i].display();
    }

    return 0;
}
