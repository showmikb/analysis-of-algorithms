#include<stdio.h>
void bford(int );
int w[10][10];
int c[10]={0,99,99,99,99};
main()
{
	int i,j,n;
	printf("Enter the no of vertices ");
	scanf("%d",&n);
	printf("Enter the weight matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				scanf("%d",&w[i][j]);
		}
	}
	bford(n);
}


void bford(int n)
{
	int i,j,k;
	for(k=1;k<n;k++)
	{
		printf("\n\nPass %d\n",k);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(c[j]>c[i]+w[i][j])
				{
					c[j]=c[i]+w[i][j];
				}
			}
			printf("Cost of vertex %d is %d\n",i,c[i]);
		}
	}
}

