/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
Problem Code :TK
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

struct student ** topKStudents(struct student *students, int len, int K) 
{
	if(students==NULL)
	     return NULL;
	if(len<=0||K<=0)
	     return NULL;
     struct student *tr=(struct student*)malloc(K*sizeof(struct student));
     
	 int indexp; 
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
    int   index1 = (low - 1);
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
  for(indexp=0;indexp<K;indexp++)
  {
  	        tr[indexp].score=students[indexp].score;
			tr[indexp].name=students[indexp].name;	
  }
  struct student **t=(struct student**)malloc(K*sizeof(struct student*));
  *t=tr;
 return t;
}

