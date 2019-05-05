#include<stdio.h>
void main()
{
	int size,index,temp;
	printf("Enter the size of Array\n");
	scanf("%d",&size);
	int starting_array[size],reversed_array[size];
	printf("Enter Array Elements\n");
	for(index=0;index<size;index++)
	{
		scanf("%d",&starting_array[index]);
	}
	temp=size-1;
	for(index=0;index<size;index++)
	{
	   reversed_array[index]=starting_array[temp];
	   --temp;	
	}
	printf("Reversed array:\n");
	for(index=0;index<size;index++)
	{
		printf("%d\t",reversed_array[index]);
	}
}
