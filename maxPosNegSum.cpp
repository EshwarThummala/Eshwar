
/*
OVERVIEW: Given an array of integers find the maximum possible sum formed by a positive and the negative
integer in the array.
Ex: input: [1, 9, 8, 2, 3, -1,-10,-5] output: 8 (formed by 9 and -1) 

INPUTS: An Integer array and the length of the array

OUTPUT: Maximum possible sum formed by a positive and the negative integer in the array

ERROR CASES: Return 0 for the invalid inputs

NOTES:
*/

#include <stdio.h>

int maxPosNegSum(int* input,int length)
{
	int index=0,pmax=0,nmax,temp1=0,temp2=0;
    if(length<=0)
        return 0;
	for(index=0;index<length;index++)
	{
	   if(input[index]>=0)
	   {
	   	 if(input[index]>pmax)
	   	     pmax=input[index];
	   	     temp2++;
	   }
	  else if(input[index]<0)
	   { temp1++;
	      if(temp1==1)
	      {
	      	nmax=input[index];
		  }
	   	 if(input[index]>nmax)
	   	     nmax=input[index];
	   }
	}
	if(temp1==0||temp2==0)
	    return 0;
	else
	     return (pmax+nmax);
}
