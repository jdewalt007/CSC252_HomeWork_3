#pragma once
#include <iostream>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;

const unsigned acctTypeChecking = 90;
const unsigned acctTypeSavings = 50;

class Account
{
public:
	string getFirstName() const;
	string getLastName() const;
	unsigned long getAccountNumber() const;
	void setFirstName(const string&);
	void setLastName(const string&);
	void setAccountNumber(const unsigned long&);


	virtual double getBalance() const = 0;
	virtual void withdraw(const double) = 0; /* 1 pure virtual
	function makes Account class abstract */
	virtual void deposit(const double) = 0;


protected:
	Account();
	Account(string&, string&, unsigned long);
	virtual ~Account(); /* not needed because it is abstract class,
	but assignment said to create one */




private:
	string firstName = "";
	string lastName = "";
	unsigned long accountNumber = 0;


};

