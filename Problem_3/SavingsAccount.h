#pragma once
#include "Account.h"

class SavingsAccount :
	public Account
{
public:
	SavingsAccount(string, string, unsigned long);
	~SavingsAccount();
	double getBalance() const;
	void withdraw(const double);
	void deposit(const double);
	double getAnnualInterestRate() const;
	double getMonthlyInterest();
	void setAnnualInterestRate(const double);




private:
	unsigned long s_acctPrefix = 0;
	double s_balance = 0.0;
	double monthly_interest = 0.0;
	double annualInterestRate = 0.0;


};

