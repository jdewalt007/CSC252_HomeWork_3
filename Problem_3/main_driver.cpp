#include <iostream>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
using namespace std;
#include <string>


int main()
{
	CheckingAccount ca("Al","Bundy",2708976017);
	ca.deposit(100.0);
	ca.setOverdraftLimit(50.0);
	SavingsAccount sa("Al","Capone",1727998156);
	sa.deposit(100.0);
	sa.setAnnualInterestRate(1.0);
	sa.getMonthlyInterest();

	cout << sa.getFirstName() << " " << sa.getLastName()
		<< " has $ " << std::fixed << setprecision(2) << sa.getBalance() 
		<< " in their savings account. \n";

	system("pause > nul");

	return 0;
}