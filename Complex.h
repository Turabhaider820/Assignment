#include <iostream>
using namespace std;

class Complex
{
public:
	double real;
	double imag;
	Complex *ptr;

	Complex operator + (Complex c);
	Complex operator - (Complex c);
	Complex operator * (Complex c);
	Complex operator / (Complex c);
};