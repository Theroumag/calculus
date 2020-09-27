#include <iostream>
#include <sstream>
#include <vector>
#include "part.h"

int main(int argc, char *argv[])
{
        int comma; // Ex: | ./a.out 1 2 3 , 4 5 | -> comma is at index 4
	for ( int i=1;i<argc; i++)
        {
		if (*argv[i] == (char)',')
		{
			comma = i;
			break;
		}
        }

	std::vector<Part> polynomial; // All parts in one array we can loop over

	int polynomialOrder = argc - comma;
	

	// -------------- Argument to polynomial parsing -----------------------------
	float firstNum;
	float secondNum;

	std::istringstream fN_istream{argv[comma + 1]}; fN_istream >> firstNum;
	std::istringstream sN_istream{argv[comma + 2]}; sN_istream >> secondNum;

	float biggerNum = ( firstNum > secondNum ) ? firstNum : secondNum;
	float smallerNum = ( firstNum < secondNum ) ? firstNum : secondNum;
	
	// ---------------------------------------------------------------------------

	float polynomial(sNum, bNum, polynomialOrder){ // sNum is smallerNum, bNum is biggerNum
	        for  (int i=polynomialOrder; i >= 0; i--)
	        {
	                float coefficient;
	                std::istringstream myStream{argv[i]}; myStream >> coefficient;
	
	                float result = 0.0;
	                if (i == 0)
	                {
	                        result += ( coefficient * sNum ); 
	                }
	                else
	                {
	                        polynomial += (coefficient * pow(Num, i)) ;
	                }
	
	        }
	}

        return 0;
}
