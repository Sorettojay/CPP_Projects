#pragma once

#include <iostream>
#include <array>
#include <vector>

class Arithmetic
{

public:

	long float add(float x, float y)
	{
		return (x+y);
	}

	long float subtract(float x, float y)
	{
		return(x - y);
	}

	long float multiply(int x[], int length)
	{
		if (length < 2) 
		{
			std::cout << "Error: Need at least two values to perform multiplication." << std::endl;
			return 0;
		}

		if (length > 2)
		{
			float m = 1;

			for (int i = 0; i < length; i++)
			{
				m = m * x[i];
			}

			return m;
		}

		if (length == 2)
		{
			return x[0] * x[1];
		}
	}

	long float divide(float x, float y)
	{
		return x / y;
	}

	int power_of(float x, float y)
	{
		//returns x to the power of y
		return pow(x, y); 
	}

};

/*
class Algebra 
{

};

class Calculus
{

};

class Matrix_Ops 
{

};
*/