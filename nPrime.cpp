
/*
OVERVIEW: Given a number N return all the prime numbers upto the integer N.
Ex: input: 10 output: [2,3,5,7] 

INPUTS: An Integer N

OUTPUT: Return an Array of Prime numbers until the number N(N inclusive)

ERROR CASES: Return NULL for invalid inputs

Sample Input : 10
Sample Output : An Array consisting elements {2,3,5,7}
NOTES:

Try to think of a optimized way , and avoid unnecessary comparisons.
*/

#include <stdio.h>
#include<stdlib.h>
int* nPrime(int N)
{
  if(N==0)
    return NULL;
  int  index1,index2,index3=0,*arrayPrime,flag=0;
  arrayPrime=(int*)malloc(N*sizeof(int));
  for(index1=2;index1<=N;index1++)
  {   flag=0;
      for(index2=2;index2<index1;index2++)
      {
          if(index1%index2==0)
              flag=1;
      }
      if(flag==0)
         arrayPrime[index3++]=index1;
  }
  return arrayPrime;	
}
