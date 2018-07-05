/* Matrix Chain Multiplication */

#include<stdio.h>
#include<malloc.h>
int res;
int mcm(int [],int,int);
int c[100][100],s[100][100];
main()
{
	int p[4]={1,2,3,4},n,i,j;
	n=sizeof(p)/sizeof(p[0]);
	printf("cost is %d",mcm(p,1,n-1));
	printf("ei valuer jonno minimum holo %d",res);
	printf("\nC Matrix is\n");
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		printf("%d\t",c[i][j]);
		printf("\n");
	}
	printf("S Matrix is :\n");
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		printf("%d\t",s[i][j]);
		printf("\n");
	}
}
int mcm(int p[],int i,int j)
{
	int k,min=999,cost;
	if(i==j)
	{
	return 0;
	c[i][j]=0;
	}
	for(k=i;k<j;k++)
	{
		cost=mcm(p,i,k)+mcm(p,k+1,j)+p[i-1]*p[k]*p[j];
		if(cost<min)
		{
			min=cost;
			res=k;
			c[i][j]=min;
			s[i][j]=k;			
		}
	}
	return min;
}

