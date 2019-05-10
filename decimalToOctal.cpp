/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
int decimalToOctal(int num)
{
	int temp, octal = 0, rev = 0, zero=0;
	if (num>0)
	{
		temp = num;
		while ((temp % 8) == 0)
		{
			zero++;
			temp = temp / 8;
		}
		while (num != 0)
		{
			temp = num % 8;
			rev = (rev * 10) + temp;
			num /= 8;
		}
		while (rev != 0)
		{
			temp = rev % 10;
			octal = (octal * 10) + temp;
			rev /= 10;
		}
		while (zero != 0)
		{
			octal *= 10;
			zero--;
		}
		return octal;
	}
	return 0;
}

float decimalToOctalFraction(float num)
{
	if (num > 0)
	{
		float y, octalf, temp;
		int z = 0, count = 0, x;
		x = (int)num;
		int m = decimalToOctal(x);
		y = num - x;
		while (y != 0)
		{
			temp = y * 8;
			z = (z * 10) + (int)temp;

			y = temp - (int)temp;
			count++;
		}
		temp = z;
		while (count != 0)
		{
			temp /= 10;
			count--;
		}
		octalf = m + temp;
		return octalf;
	}

}

