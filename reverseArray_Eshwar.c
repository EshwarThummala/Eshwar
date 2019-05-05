#include<stdio.h>
void main()
{
	int size,index,temp1,temp2,temp;
	printf("Enter the size of Array\n");
	scanf("%d",&size);
	int starting_array[size],reversed_array[size];
	printf("Enter Array Elements\n");
	for(index=0;index<size;index++)
	{
		scanf("%d",&starting_array[index]);
	}
	index=0;
	temp2=size-1;
         while(index<=temp2)
        {
          temp=starting_array[index];
	   starting_array[index]=starting_array[temp2];
	   starting_array[temp2]=temp;
	   ++index;
	   --temp2;	
	}
	printf("Reversed array:\n");
	for(index=0;index<size;index++)
	{
		printf("%d\t",starting_array[index]);
	}
}
