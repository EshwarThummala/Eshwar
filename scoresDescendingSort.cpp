/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

Problem Code :SD
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
};

void * scoresDescendingSort(struct student *students, int len)
{	if(students==NULL)
	     return NULL;
	if(len<=0)
	     return NULL;
void swap(struct student *temp1,struct student *temp2)
{
	struct student extra;
	extra=*temp1;
	*temp1=*temp2;
	*temp2=extra;
}
int partition (struct student *tempx,int low,int high)
{
   int pivot = tempx[high].score;  
   int index1 = (low - 1);
   int index2;
    for (index2 = low; index2 <= high- 1; index2++)
    {

        if (tempx[index2].score > pivot)
        {
            index1++; 
            swap(&tempx[index1],&tempx[index2]);
        }
    }
    swap(&tempx[index1 + 1],&tempx[high]);
    return (index1 + 1);
}
void Sort(struct student *temp,int low,int high)
{
    if (low < high)
    {
       int part = partition(temp, low, high);

        Sort(temp, low, part - 1); 
        Sort(temp, part + 1, high); 
    }
}

Sort(students,0,len-1); 
return students;
}
