// Jeremy Harrell
// ITSE1307
// Programming Problem pythagorean theorem 
// Programming a^2 + b^2 = c^2

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	//Setting up the doubles
	double Alpha = 4.0;
	double Beta = 16.0;
	double Central = pow(Alpha, 2) + pow(Beta, 2);

	//Solving for a^2 + b^2 = c^2
	cout << pow(Alpha, 2) << " " << pow(Beta, 2) << " " << Central << endl;
	cout << fixed;
    return 0;
}

