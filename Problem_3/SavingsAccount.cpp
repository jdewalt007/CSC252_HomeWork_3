#include "SavingsAccount.h"



SavingsAccount::SavingsAccount(string fn, string ln, unsigned long acctNum)
{
	s_acctPrefix = acctTypeSavings;
	setAccountNumber(acctNum);
	setFirstName(fn);
	setLastName(ln);
}

SavingsAccount::~SavingsAccount()
{
}

double SavingsAccount::getBalance() const
{
	return s_balance;
}

void SavingsAccount::withdraw(const double debitAmount)
{	
	if (debitAmount <= 0)
	{
		cout << "Invalid Request (amount <= $0)" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
	else if (debitAmount <= s_balance)
		s_balance -= debitAmount;
	else
	{
		cout << "Insufficient Funds for withdrawl request" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
}

void SavingsAccount::deposit(const double creditAmount)
{
	if (creditAmount <= 0)
	{
		cout << "Invalid Request (amount <= $0)" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
	else if (creditAmount > 0 && creditAmount >= 1000000)
	{
		cout << "Online banking deposits are limited to $1,000,000" << endl;
		cout << "< Please contact a banking representative at a nearby branch >" << endl << endl;
		cout << "(Press Any Key to Continue)  ";
		system("pause > nul");
		system("cls");
	}
	else
		s_balance += creditAmount;
}

double SavingsAccount::getAnnualInterestRate() const
{
	return annualInterestRate;
}

void SavingsAccount::setAnnualInterestRate(const double x_annualInterestRate)
{
	this->annualInterestRate = x_annualInterestRate / 100.0;
}

double SavingsAccount::getMonthlyInterest() 
{
	monthly_interest = s_balance * (annualInterestRate / 12);
	return monthly_interest;
}
