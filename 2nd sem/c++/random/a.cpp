/*
1. Write a program according to the specification given below:
- Create a class Account with data members acc no, balance, and min_balance(static)
-Include methods for reading and displaying values of objects
- Define static member function to display min_balance
-Create array of objects to store data of 5 accounts and read and display values of each object
*/
#include <iostream>
using namespace std;
class Account
{
    static void displaymin();
    static int min_balance;

public:
    int acc_no;
    int balance;

    void displaymin()
    {
        cout << "The minimum balance possible is: " << min_balance << endl;
    }

    void reading()
    {
        cout << "enter acc no: ";
        cin >> acc_no;
        cout << "enter the bank balance: ";
        cin >> balance;
    }
    void output()
    {
        cout << "Your account no is " << acc_no << endl;
        cout << "Your bank balance is " << balance << endl;
    }
};

int Account::min_balance = 20;

void Account::displaymin()
{
    cout << "The minimum balance possible is: " << min_balance << endl;
}

int main()
{
    Account a[5];
    cout << "Entering the banking details." << endl;
    for (int i = 0; i < 5; i++)
    {
        a[i].reading();
    }
    cout << "Displaying the banking details." << endl;
    for (int i = 0; i < 5; i++)
    {
        a[i].output();
    }

    Account::displaymin();
    return 0;
}