#include<iostream>
#include<math.h>
using namespace std;

class Loan
{
    int loanID;
    string applicantName;
    double loanAmount;
    double annualInterestRate;
    int tenureMonths;

public:


    Loan()
    {
        loanID = 0;
        applicantName = "Not Assigned";
        loanAmount = 0;
        annualInterestRate = 0;
        tenureMonths = 0;
    }


    Loan(int id, string name, double amount, double rate, int tenure)
    {
        loanID = id;
        applicantName = name;
        loanAmount = amount;
        annualInterestRate = rate;
        tenureMonths = tenure;
    }


    double calculateEMI()
    {
        double monthlyRate = annualInterestRate / (12 * 100);
        double emi;

        emi = (loanAmount * monthlyRate * pow(1 + monthlyRate, tenureMonths)) /
              (pow(1 + monthlyRate, tenureMonths) - 1);

        return emi;
    }


    void display()
    {
        cout << "\nLoan ID: " << loanID;
        cout << "\nApplicant Name: " << applicantName;
        cout << "\nLoan Amount: " << loanAmount;
        cout << "\nAnnual Interest Rate: " << annualInterestRate << "%";
        cout << "\nTenure (Months): " << tenureMonths;
        cout << "\nMonthly EMI: " << calculateEMI() << endl;
    }
};

int main()
{
    int id;
    string name;
    double amount;
    double rate;
    int tenure;

    Loan L1;
    cout << "Default Loan Details:";
    L1.display();


    Loan L2;
    cout<<"Enter your name";
    getline(cin,name);
    cout<<"Enter your id";
    cin>>id;
    cout<<"Enter your amount of loan";
    cin>>amount;
    cout<<"Enter rate of interest";
    cin>>rate;
    cout<<"Enter number of months for tenure";
    cin>>tenure;
    L2=Loan(id,name,amount,rate,tenure);
    cout << "\n\nLoan Details for One Applicant:";

    L2.display();

    return 0;
}
