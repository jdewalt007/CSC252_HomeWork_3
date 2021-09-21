#pragma once
#include "Account.h"

class CheckingAccount :
	public Account
{
public:
	CheckingAccount(string, string, unsigned long);
	~CheckingAccount();

	double getBalance() const;
	void withdraw(const double);
	void deposit(const double);
	void setOverdraftLimit(const double);

private:
	double c_balance = 0.0;
	double c_overdraftLimit = 0.0;
	unsigned c_acctPrefix = 0;
};

