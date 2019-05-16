/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

Problem Code :SAP
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	 if(Arr==NULL)
        return NULL;
    if(len<=0)
        return NULL;
    int index,index2,first,second=0,temp;
    for(index=0;index<len;index++)
    {
        if(Arr[index]>Arr[index+1])
        {
            first=index;
            temp=Arr[index+1];
            for(index2=index+2;index2<len;index2++)
            {
                if(Arr[index2]<temp)
                   {temp=Arr[index2];
                     second=index2;
                   }
            }
            
            break;
        }
    }
   if(second!=0)
   { index=Arr[first];
    Arr[first]=Arr[second];
    Arr[second]=index;
   }
	return Arr;
} 
