/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	int	n1 = 0, n2 = 1, fibonacci,index;
	if (n<=0)
	{
		return -1;
	}
	else if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	for (index = 3; index <= n; index++)
	{
		fibonacci = n1 + n2;
		n1 = n2;
		n2 = fibonacci;
	}
	return fibonacci;
}

int nthPrime(int num)
{
	int count = 1, index1, index2, flag = 0, prime;
	if (num <= 0)
	{
		return -1;
	}
	if (num == 1)
	{
		return 2;
	}
	for (index1 = 3; count != num; index1++)
	{
		flag = 0;
		for (index2 = 2; index2<index1 - 1; index2++)
		{
			if (index1%index2 == 0)
				flag = 1;
		}
		if (flag == 0)
		{
			count++;
			prime = index1;
		}
	}
	return prime;
}