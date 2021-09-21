#include "Complex.h"


int main()
{
	Complex comp1, comp2;
	cout << std::left;
	cout << endl << endl << endl;
	cout << setw(25) << "" << "A Complex number has the following format (a + bi)" << endl << endl;
	cout << setw(35) << "" << "(Press Any Key to Continue) ";
	system("pause > nul");
	system("cls");
	cout << endl;
	cout << setw(80) << "Complex number (#1)" << endl << endl;
	cin >> comp1;
	system("cls");
	cout << setw(80) << "Complex number (#2)" << endl << endl;
	cin >> comp2;
	system("cls");
	cout << comp1 << " + " << comp2 << " = " << comp1 + comp2 << endl << endl;
	Complex comp3(0.0,0.0);
	Complex comp4(3.0,-7.0);
	cout << comp3 << " + " << comp4 << " = " << comp3 + comp4 << endl << endl;
	cout << comp1 << " += " << comp3 << " = ";
	comp1 += comp3;
	cout << comp1 << endl << endl;
	cout << comp2 << " /= " << comp3 << " = ";
	comp2 /= comp3;
	/* constructor with undefined invoked if comp3 real and imaginary are 0
	otherwise calculation performed and printed out */
	if (comp3.getReal() != 0 && comp3.getImaginary() != 0)
		cout << comp2 << endl;
	cout << endl;
	double r = 5.0;
	double i = 2.0;
	comp3.setReal(r);
	comp3.setImaginary(i);
	/* constructor with undefined invoked if comp3 real and imaginary are 0
	   otherwise calculation performed and printed out */
	cout << comp2 << " / " << comp3 << " = " << comp2 / comp3 << endl << endl;
	r = 2.5;
	i = 5.1;
	comp4.setReal(r);
	comp4.setImaginary(i);
	cout << comp1 << " * " << comp4 << " = " << comp1 * comp4 << endl << endl;
	cout << comp1 << " *= " << comp4 << " = ";
	comp1 *= comp4;
	cout << comp1 << endl << endl;
	cout << comp1 << " - " << comp4 << " = " << comp1 - comp4 << endl << endl;
	cout << comp1 << " -= " << comp4 << " = ";
	comp1 -= comp4;
	cout << comp1 << endl << endl;

	system("pause > nul");
	return 0;
}