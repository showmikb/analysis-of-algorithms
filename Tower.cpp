/* Tower of Hanoi */

#include<stdio.h>
int TOH(int,char,char,char);
main()
{
	int n;
	printf("Enter the no of disks: ");
	scanf("%d",&n);
	printf("\nSOLUTION\n");
	TOH(n,'A','B','C');
}

int TOH(int n,char a,char b,char c)
{
	if(n==1)
	printf("%c to %c\n",a,c);
	else
	{
		TOH(n-1,a,c,b);
		printf("%c to %c\n",a,c);
		TOH(n-1,b,a,c);
	}
}
