#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "part.h"

int main(int argc, char *argv[])
{
        // Expected input: ./a.out "2 3" "3 4" , 3 4

	int comma;
	for ( int i=1;i<argc; i++)
        {
		if (*argv[i] == (char)',')
		{
			comma = i; break;
		}
	}
	
	std::vector<Part> smallnum_polynomial;
	std::vector<Part> bignum_polynomial;
	
	double firstNum  = std::stod( (std::string) argv[comma +1] );
	double secondNum = std::stod( (std::string) argv[comma +2] );
	double biggerNum  = ( firstNum > secondNum ) ? firstNum : secondNum;
	double smallerNum = ( firstNum < secondNum ) ? firstNum : secondNum;

	for ( int i=1; i <= comma - 1; i++)
        {
		double coeff;
		double exponent;
		std::string s = argv[i];

		if (s.find(' ') == std::string::npos)
		{
			double num = std::stof(s);
			Part smallernum_part { 1, num, 1 };
			Part biggernum_part { 1, num, 1 };
			smallnum_polynomial.push_back(smallernum_part);
			bignum_polynomial.push_back(biggernum_part);
			continue;

		} else {

			size_t delimiter_index = s.find(" ");
			std::string s_coeff = s.substr(0, delimiter_index); // Go from index 0 to delimiter_index
			std::string s_exp = s.substr(delimiter_index + 1); // Go from delimiter_index to end of string (implied)
			
			coeff = std::stof(s_coeff);
			exponent = std::stof(s_exp);

			Part smallernum_part { coeff, smallerNum, exponent };
			Part biggernum_part { coeff, biggerNum, exponent };
	
			smallnum_polynomial.push_back(smallernum_part);
			bignum_polynomial.push_back(biggernum_part);
		}
	}

	double sSum = 0; // f(a)
	double bSum = 0; // f(b)
	for (Part& part : smallnum_polynomial)
	{
		// std::cout << part << '\n';
		sSum += part.sum();
	}

	for (Part& part : bignum_polynomial)
	{
		// std::cout << part << '\n';
		bSum += part.sum();
	}
	
	double slope = (bSum - sSum) / (biggerNum - smallerNum);
	std::cout << "Vavg: " << slope << '\n';
	
	return 0;
}

