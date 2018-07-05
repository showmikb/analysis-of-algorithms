#include<stdio.h>
#include<math.h>
int t[8];
void nqueen(int );
int empty(int );
void print();
main()
{
	nqueen(1);
}


void nqueen(int i)
{
	for(t[i]=1;t[i]<=8;t[i]++)
	{
		if(empty(i))
		{
			if(i==8)
			print();
			else
			nqueen(i+1);
		
		}
	}
}


int empty(int i)
{
	int j=1;
	while((t[i]!=t[j]) && (abs(t[i]-t[j])!=abs(i-j)) && (j<8))
	j++;
	if(i==j)
	return(1);
	else
	return(0);
}


/*void print()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if(j==t[i])
			printf(" Q ");
			else printf(" * ");
		}
		printf("\n");
	}
} 
*/

void print()
{
	int i;
	for(i=1;i<=9;i++)
	printf("%d   ",t[i]);
	printf("\n");
}
	
