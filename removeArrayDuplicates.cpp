/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
if(len<=0)
   return -1;
if(Arr==NULL)
  return -1;
int index1,index2,count=0,i;
for(index1=1;index1<len;index1++)
{
   for(index2=(index1-1);index2>=0;index2--)
   {
       if(Arr[index1]==Arr[index2])
           Arr[index1]=0;
   }
}

for(index1=2;index1<len;index1++)
{
index2=index1-1;      
while(Arr[index2]==0)
{
  index2--;  
  count++;
}
if(count!=0)
{Arr[index2+1]=Arr[index1];
 Arr[index1]=0;
 count=0;
}
}
count=0;
index1=0;
  while(Arr[index1]!=0)
    { count++;
      index1++;
    }
return count;	
	
}
