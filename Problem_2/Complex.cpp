#include "Complex.h"
#include <cmath>
#include <cstdlib>
using std::fixed;
using std::setprecision;


Complex::Complex() {}

Complex::Complex(int dummy)
{
	cout << " Undefined" << endl;
}

Complex::Complex(double real, double imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}

Complex::~Complex()
{
}


double Complex::getReal() const
{
	return real;
}

double Complex::getImaginary() const
{
	return imaginary;
}

void Complex::setReal(double& real)
{
	this -> real = real;
}

void Complex::setImaginary(double& imaginary)
{
	this -> imaginary = imaginary;
}

Complex Complex::add(const Complex& otherComplex) const
{
	double a = real + otherComplex.getReal();
	double b = imaginary + otherComplex.getImaginary();
	return Complex(a, b);
}

Complex Complex::subtract(const Complex& otherComplex) const
{
	double a = real - otherComplex.getReal();
	double b = imaginary - otherComplex.getImaginary();
	return Complex(a, b);
}

Complex Complex::divide(const Complex& complex2) const
{
	double real_numerator = (real * complex2.getReal() + imaginary * complex2.getImaginary());
	double imag_numerator = (imaginary * complex2.getReal() - real * complex2.getImaginary());
	double denominator = pow(complex2.getReal(), 2) + pow(complex2.getImaginary(), 2);

	double a = real_numerator / denominator;
	double b = imag_numerator / denominator;

	return Complex(a, b);
}

Complex Complex::multiply(const Complex& complex2) const
{
	double a = (real * complex2.getReal() - imaginary * complex2.getImaginary());
	double b = (imaginary * complex2.getReal() + real * complex2.getImaginary());

	return Complex(a, b);
}

Complex& Complex::operator +=(const Complex& otherComplex)
{
	*this = add(otherComplex);
	return *this;
}

Complex& Complex::operator -=(const Complex& otherComplex)
{
	*this = subtract(otherComplex);
	return *this;
}

Complex& Complex::operator *=(const Complex& otherComplex)
{
	*this = multiply(otherComplex);
	return *this;
}

Complex& Complex::operator /=(const Complex& otherComplex)
{
	if (otherComplex.getReal() == 0 && otherComplex.getImaginary() == 0)
		return Complex(0);
	else
	{
		*this = divide(otherComplex);
		return *this;
	}
}


std::ostream& operator <<(std::ostream& out, const Complex& complex)
{
	if (complex.imaginary < 0)
		out << "(" << fixed << setprecision(2) << complex.real << " - " << -1 * complex.imaginary << "i)";
	else
		out << "(" << fixed << setprecision(2) << complex.real << " + " << complex.imaginary << "i)";
	return out;
}


std::istream& operator >> (std::istream& in, Complex& complex)
{
	cout << "Please enter a : ";
	in >> complex.real;
	cout << endl;
	cout <<"Please enter b: ";
	in >> complex.imaginary;
	return in;
}


Complex operator +(const Complex& complex1, const Complex& complex2)
{
	return complex1.add(complex2);
}

Complex operator /(const Complex& complex1, const Complex& complex2)
{
	if (complex2.getReal() == 0 && complex2.getImaginary() == 0)
		return Complex(0);
	else
		return complex1.divide(complex2);
}

Complex operator -(const Complex& complex1, const Complex& complex2)
{
	return complex1.subtract(complex2);
}

Complex operator *(const Complex& complex1, const Complex& complex2)
{
	return complex1.multiply(complex2);
}





