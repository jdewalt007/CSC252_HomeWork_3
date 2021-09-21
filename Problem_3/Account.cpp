#include "Account.h"



Account::Account()
{
}

Account::Account(string& fn, string& ln, unsigned long acctNum)
{
	setFirstName(fn);
	setLastName(ln);
	setAccountNumber(acctNum);
}


Account::~Account()
{
}

string Account::getFirstName() const
{
	return firstName;
}

string Account::getLastName() const
{
	return lastName;
}

unsigned long Account::getAccountNumber() const
{
	return accountNumber;
}

void Account::setFirstName(const string& fn)
{
	this->firstName = fn;
}

void Account::setLastName(const string& ln)
{
	this->lastName = ln;
}

void Account::setAccountNumber(const unsigned long& acctNum)
{
	this->accountNumber = acctNum;
}