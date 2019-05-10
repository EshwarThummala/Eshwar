/*
OVERVIEW:
1)Write a function which takes a octal number as input and returns the hexadecimal number for 
  octalToHexadecimal().
E.g.: octalToHexadecimal(10) returns 8.

2)Write a function which takes a fractional octal number as input and returns the hexadecimal number for 
octalToHexadecimalFraction() until precision two
E.g.: octalToHexadecimal(6.01) returns 6.04

INPUTS: Single octal number num;

OUTPUT: hexadecimal value of the octal number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>
int octalToHexadecimal(long int num)
{
	if (num <= 0)
		return 0;
	int index, temp1, temp2 = 1, hex = 0, rev = 0;
	long int temp = num, decimal = 0;
	for (index = 0; temp != 0; index++)
	{
		temp1 = temp % 10;
		if (temp1>7)
			return 0;
		decimal = (decimal)+(temp1*temp2);
		temp2 = temp2 * 8;
		temp = temp / 10;
	}
	temp2 = 0;
	temp1 = decimal;
	while ((temp1 % 16) == 0)
	{
		temp2++;
		temp1 = temp1 / 16;
	}
	while (decimal != 0)
	{
		temp1 = decimal % 16;
		rev = (rev * 10) + temp1;
		decimal /= 16;
	}
	while (rev != 0)
	{
		temp1 = rev % 10;
		hex = (hex * 10) + temp1;
		rev /= 10;
	}
	while (temp2 != 0)
	{
		hex *= 10;
		temp2--;
	}
	return hex;
}

float octalToHexadecimalFraction(float num)
{
	if (num > 0)
	{
		float y, hexf, temp, temp1, temp2 = 0.125;
		int z = 0, count = 0, x, k, m,index, rev = 0;
		x = (int)num;
		int inthex = octalToHexadecimal(x);
		y = num - x;
		temp1 = y;

		while (count<4)
		{
			m = temp1 * 10;
			k = (int)m;
			temp1 = m;
			count++;
		}

		while (k != 0)
		{
			temp1 = k % 10;
			rev = (rev * 10) + temp1;
			k /= 10;
		}
		while (rev != 0)
		{
			k = rev % 10;
			temp = (temp)+(k*temp2);
			temp2 = temp2 / 8;
			rev = rev / 10;
		}
		y = temp;
		count = 0;
		while (y != 0)
		{
			temp = y * 16;
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
		hexf = inthex + temp;
		return hexf;
	}
}
