/*
Discuss features of class and object.
Design a class to represent a bank account with

data

members name,
account-number,
account-type,
and balance

and functions to assign initial values, to deposit an amount, to withdraw an amount after checking balance, and to display the name and balance.
*/

#include <iostream>
using namespace std;

class Bank
{

	string name;
	long int account_number;
	string account_type;
	long int balance = 0;

public:
	void intialValue()
	{
		cout << "enter your name: ";
		cin >> name;
		cout << "enter your account number: ";
		cin >> account_number;
		cout << "enter your account Type: ";
		cin >> account_type;
		cout << "enter your actual balance: ";
		cin >> balance;
	}

	void depositAmount()
	{
		int bal;
		cout << endl;
		cout << "enter deposit amount: ";
		cin >> bal;

		balance += bal;
		cout << "your balance is deposited and your new balance is " << balance << endl;
	}

	void withDraw() // after checking balance
	{
		int checkbal;
		cout << endl;
		cout << "you total balance is " << balance << endl;
		cout << "how much you want to withdraw : ";
		cin >> checkbal;

		if (balance >= checkbal)
		{
			balance -= checkbal;
			cout << "balance withdraw and your new balance is " << balance << endl;
		}
		else
		{
			cout << "insufficient balance" << endl;
		}
	}
	void display()
	{
		cout << endl;
		cout << "account information" << endl;
		cout << "name " << name << endl;
		cout << "name " << account_number << endl;
		cout << "name " << account_type << endl;
		cout << "name " << balance << endl;
	}
};

int main()
{
	Bank myobj;
	myobj.intialValue();
	myobj.depositAmount();
	myobj.withDraw();
	myobj.display();
	return 0;
}