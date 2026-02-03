#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accNo;
    string name;
    double balance;

public:
    void addDetails();
    int getAccNo();
    void addMoney(double);
    void debitMoney(double);
    void display();
    int searche(BankAccount b[], int n, int id);
};
void BankAccount::addDetails()
{
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Name: ";
    cin >> name;
    balance = 0;
}

int BankAccount::getAccNo()
{
    return accNo;
}

void BankAccount::addMoney(double amount)
{
    balance += amount;
}

void BankAccount::debitMoney(double amount)
{
    if (amount > balance)
        cout << "Insufficient Balance\n";
    else
        balance -= amount;
}

void BankAccount::display()
{
    cout << "\nAccount Number: " << accNo;
    cout << "\nName: " << name;
    cout << "\nBalance: " << balance << endl;
}
int BankAccount::searche(BankAccount b[], int n, int id)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i].getAccNo() == id)
            return i;
        return -1;
    }
}
int main()
{
xz
    int choice, id, pos;
    double amount;
    int n;
    BankAccount b[n];
    cout << "Enter number of customers: ";
    cin >> n;



    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for customer " << i + 1 << endl;
        b[i].addDetails();
    }

    do
    {
        cout << "\n1. Add Money";
        cout << "\n2. Debit Money";
        cout << "\n3. Display Account";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 4)
            break;

        cout << "Enter Account Number: ";
        cin >> id;

        pos = searche(b, n, id);

        if (pos == -1)
        {
            cout << "Account not found\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            b[pos].addMoney(amount);
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            b[pos].debitMoney(amount);
            break;

        case 3:
            b[pos].display();
            break;
        }

    }
    while (true);

    return 0;
}
