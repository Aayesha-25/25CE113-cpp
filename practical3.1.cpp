#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float basicSalary;
    float bonus;
    char grade;

public:
    // Default constructor
    Employee()
    {
        id = 1;
        name = "Default Employee";
        basicSalary = 20000;
        bonus = 1000;
        calculateGrade();
    }

    // Parameterized constructor (default bonus)
    Employee(int i, string n, float salary)
    {
        id = (i > 0) ? i : 1;
        name = n;
        basicSalary = (salary >= 0) ? salary : 0;
        bonus = 1000; // default bonus
        calculateGrade();
    }

    // Parameterized constructor (custom bonus)
    Employee(int i, string n, float salary, float b)
    {
        id = (i > 0) ? i : 1;
        name = n;
        basicSalary = (salary >= 0) ? salary : 0;
        bonus = (b >= 0) ? b : 0;
        calculateGrade();
    }

    // Inline function
    inline float totalSalary()
    {
        return basicSalary + bonus;
    }

    // Grade calculation
    void calculateGrade()
    {
        float total = totalSalary();

        if (total >= 50000)
            grade = 'A';
        else if (total >= 30000)
            grade = 'B';
        else if (total >= 20000)
            grade = 'C';
        else
            grade = 'D';
    }

    // Update bonus
    void updateBonus(float b)
    {
        if (b >= 0)
        {
            bonus = b;
            calculateGrade();
        }
        else
            cout << "Invalid bonus!\n";
    }

    // Display details
    void display()
    {
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << totalSalary();
        cout << "\nGrade: " << grade << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore(); // flush newline

    Employee emp[100]; // fixed array like your code

    int id;
    string name;
    float salary, bonus;
    int choice;

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, name);

        cout << "ID: ";
        cin >> id;

        cout << "Basic Salary: ";
        cin >> salary;

        cout << "Use default bonus? (1-Yes / 0-No): ";
        cin >> choice;

        if (choice == 1)
        {
            emp[i] = Employee(id, name, salary);
        }
        else
        {
            cout << "Enter bonus: ";
            cin >> bonus;
            emp[i] = Employee(id, name, salary, bonus);
        }

        cin.ignore(); // clear buffer
    }

    // Display all employees
    cout << "\n\nEMPLOYEE DETAILS:\n";
    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }

    // Find highest salary employee
    int topIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (emp[i].totalSalary() > emp[topIndex].totalSalary())
            topIndex = i;
    }

    cout << "\nTop Paid Employee:\n";
    emp[topIndex].display();

    return 0;
}
