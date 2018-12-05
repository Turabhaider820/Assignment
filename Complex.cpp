#include "Complex.h"

Complex Complex :: operator + (Complex num)
	{
		Complex comp;
		comp.real = real + num.real;
		comp.imag = imag + num.imag;

		return comp;
	}

Complex Complex :: operator - (Complex num)
	{
		Complex comp;
		comp.real = real - num.real;
		comp.imag = imag - num.imag;

		return comp;
	}
Complex Complex :: operator * (Complex num)
	{
		Complex comp;
		comp.real = real * num.real;
		comp.imag = imag * num.imag;

		return comp;
	}
Complex Complex :: operator / (Complex num)
	{
		Complex comp;
		try
		{
			if (num.real == 0 || num.imag == 0)
			{
				throw(0);
			}
		}
			catch (int)
			{ 
				cout << "You can not divide by zero:" << endl;
			}
		
		comp.real = real / num.real;
		comp.imag = imag / num.imag;

		return comp;
	}


	


