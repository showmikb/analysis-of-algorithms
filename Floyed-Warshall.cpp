/* Floyed-Warshall */

#include<stdio.h>
void FW(int);
int d[10][10];
main()
{
	int i,j,n;
	printf("Enter the no of the vertices: ");
	scanf("%d",&n);
	printf("Enter the initial matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&d[i][j]);
		}
	}
	printf("\n\nRESULT\n\n");
	printf("D0\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	FW(n);
}

void FW(int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(d[i][k]+d[k][j]<d[i][j])
				d[i][j]=d[i][k]+d[k][j];
			}
		}
		printf("\n\n");
		printf("D%d\n",k);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{	
				printf("%d ",d[i][j]);
			}
			printf("\n");
		}
	}
}
