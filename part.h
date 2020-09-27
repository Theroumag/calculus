#pragma once

// Part of a polynomial function, like in 2x^8 + 4x^2 - 3,
// So 2x^8 would be a Part where
// coefficient = 2;
// exponent = 8

#include <string>

struct Part {
	float coefficient;
	float x;
	float exponent;

	// Add myPart.result() method
};

ostream& operator<<(ostream& os, const Part& p)
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



istream& operator>>(istream& is, Part& p)
{
	// cint >> myPart
	// Format should be: 
	// -5x^2
	
	// Uh... somehow

	// Part p { -1.1, 2, 3 };  

}
