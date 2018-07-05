/* Finding maximum no using recursion */

#include<stdio.h>
int max(int,int);
int a[20];
main()
{
	int n,i;
	printf("Enter no of elements ");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("MAX=%d",max(n,a[0]));
}

int max(int n,int m)
{
	if(n==0)
	return m;
	else
	{
		if(a[n]>m)
		m=a[n];
		max(n-1,m);
	}
}
