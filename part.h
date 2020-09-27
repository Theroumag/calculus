#pragma once

// Part of a polynomial function, like in 2x^8 + 4x^2 - 3,
// So 2x^8 would be a Part where
// coefficient = 2;
// exponent = 8

#include <string>

struct PolynomialPart {
	float coefficient;
	float x;
	float exponent;

	// Add myPart.result() method
};

ostream& operator<<(ostream& os, const PolynomialPart& p)
{
	if *p.negative = True:
		return os << "-" << p.coefficient << "*" << " x" << "^" << exponent;
	else:
		return os << p.coefficient << "*" << " x" << "^" << exponent;
}


ostream& operator<<(ostream& os, const PolynomialPart& p)
{
	bool negative = true;
	if (negative)
	{
		return os << "-" << p.coefficient << "*"
			  << " x"
			  << "^" << p.exponent;
	} 
	
	else
	{
		return os << p.coefficient << "*"
			  << " x"
			  << "^" << p.exponent;
	}

}



istream& operator>>(istream& is, PolynomialPart& p)
{
	// cint >> myPart
	// Format should be: 
	// -5x^2
	
	// Uh...

	// PolynomialPart p { -1.1, 2, 3 };  

}
