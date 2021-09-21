#include "CheckingAccount.h"



CheckingAccount::CheckingAccount(string fn, string ln, unsigned long acctNum)
{
	c_acctPrefix = acctTypeChecking;
	setFirstName(fn);
	setLastName(ln);
	setAccountNumber(acctNum);
}


CheckingAccount::~CheckingAccount()
{
}

double CheckingAccount::getBalance() const
{
	return (c_balance + c_overdraftLimit);
}

void CheckingAccount::withdraw(const double debitAmount)
{	
	if (debitAmount <= 0)
	{
		cout << "Invalid Request (amount <= $0)" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
	else if (debitAmount <= (c_balance + c_overdraftLimit))
	{
		c_balance -= debitAmount;
		if (c_balance < 0)
		{
			cout << "Warning! You now have a negative checking balance of $"
				<< std::fixed << std::setprecision(2) << c_balance << endl << endl;
			cout << "$" << c_overdraftLimit + c_balance <<
				" is remaining for withdrawl before reaching your overdraft limit" << endl << endl;
			cout << "(Press Any Key to Continue)  ";
			system("pause > nul");
			system("cls");
		}
	}
	else
	{
		cout << "Insufficient Funds for withdrawl request" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
}

void CheckingAccount::deposit(const double depositAmount)
{
	if (depositAmount > 0 && depositAmount <= 1000000)
		c_balance += depositAmount;
	else if (depositAmount > 0 && depositAmount > 1000000)
	{
		cout << "Online banking deposits are limited to $1,000,000" << endl;
		cout << "< Please contact a banking representative at a nearby branch >" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
	else
	{
		cout << "You can not deposit a negative amount" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
}

void CheckingAccount::setOverdraftLimit(const double od_limit)
{
	this->c_overdraftLimit = od_limit;
}
