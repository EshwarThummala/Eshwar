/*
OVERVIEW: Given an Integer Array return the count of one's and two's in a new array of length two.
Ex: input: [1,2,2,1,2,1,2] 
	output: [3,4]
	where 3 is the count of 1's and 4 is the count of 2's

INPUTS: An Integer Array and length of the array 

OUTPUT: An Array with 1's count and 2's count

ERROR CASES: Return NULL for invalid inputs

Difficulty : Very Easy
*/

#include <stdio.h>
int* oneTwoCount(int* input, int length)
{   if(length<=0)
          return NULL;
    int index,one=0,two=0,*resultarr;
   resultarr=(int*)malloc(2*sizeof(int));
	for(index=0;index<length;index++)
	{
		if(input[index]==1)
	        one++;
		else if(input[index]==2)
		    two++;
		else
		    return 0;	
	}
	resultarr[0]=one;
	resultarr[1]=two;
	return resultarr;
}
