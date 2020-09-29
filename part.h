#pragma once
#include <string>
#include <iostream>
#include <cmath>

struct Part {
	double coefficient;
	double x;
	double exponent;

	double sum()
	{
		return (coefficient * std::pow(x, exponent));
	}
};


// Make it so I can do `cout << Part(2,3,4)
// Result is "2*3^4"
std::ostream& operator<<(std::ostream& os, const Part& p)
{
	return os << p.coefficient << "*"
		  << p.x
		  << "^" << p.exponent;
}
