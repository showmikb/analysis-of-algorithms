/* 15 Puzzle */

#include<stdio.h>
int matrix[16]={};
int solve[16]={};
int less(int);
main()
{
	int i,x,result=0;
	for(i=0;i<16;i++)
	{
		if (matrix[i]==16)
		x=solve[i];
	}
	for(i=0;i<16;i++)
	{
		result=result+less(i);
	}
	result=result+x;
	if(result%2==0)
	printf("SOLVABLE\n");
	else
	printf("NON-SOLVABLE\n");
}

int less(int a)
{
	int count=0,e,i,j;
	e=matrix[a];
	for(i=a;i<16;i++)
	{
		if(matrix[i]<e)
		count++;
	}
	return count;
}
