#pragma once
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
using std::cin;


class Complex
{
public:
	Complex();
	Complex(int dummy);
	Complex(double, double);
	~Complex();

	double getReal() const;
	double getImaginary() const;
	void setReal(double&);
	void setImaginary(double&);

	Complex add(const Complex& otherComplex) const;
	Complex subtract(const Complex& otherComplex) const;
	Complex divide(const Complex&) const;
	Complex multiply(const Complex&) const;
	Complex& operator +=(const Complex& otherComplex);
	Complex& operator -=(const Complex& otherComplex);
	Complex& operator /=(const Complex& otherComplex);
	Complex& operator *=(const Complex& otherComplex);

	
	friend std::ostream& operator<<(std::ostream& out, const Complex& complex);
	friend std::istream& operator >> (std::istream& in, Complex& complex);

private:
	double real = 0.0;
	double imaginary = 0.0;

};

Complex operator +(const Complex&, const Complex&);
Complex operator -(const Complex&, const Complex&);
Complex operator /(const Complex&, const Complex&);
Complex operator *(const Complex&, const Complex&);

