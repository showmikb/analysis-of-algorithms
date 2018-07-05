/* Knapsack Problem */

#include<stdio.h>
void knapsack(float *,int,float,float *);
main()
{
	int i,j,n;
	float temp,m;
	float p[10],w[10],pw[10];
	printf("Enter the no of objects: ");
	scanf("%d",&n);
	printf("Enter the profits\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&p[i]);
	}
	printf("Enter the weights\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&w[i]);
	}
	for(i=0;i<n;i++)
	{
		pw[i]=p[i]/w[i];
	}
	printf("Enter the size of the knapsack: ");
	scanf("%f",&m);
	printf("\t------SORTING------\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pw[i]<pw[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=w[i];
				w[i]=w[j];
				w[j]=temp;
				temp=pw[i];
				pw[i]=pw[j];
				pw[j]=temp;
			}
		}
	}
	printf("\t------PROFIT------\n");
	for(i=0;i<n;i++)
	{
		printf("%f",p[i]);
	}
	printf("\n\t------WEIGHT------\n");
	for(i=0;i<n;i++)
	{
		printf("%f",w[i]);
	}
	printf("\n\t------PROFIT vs WEIGHT------\n");
	for(i=0;i<n;i++)
	{
		printf("%f",pw[i]);
	}
	knapsack(w,n,m,p);
}


void knapsack(float w[],int n,float m,float p[])
{
	int i;
	float x[10],u,z=0;
	for(i=0;i<n;i++)
	x[i]=0.0;
	u=m;
	for(i=0;i<n;i++)
	{
		if(w[i]>u)
		break;
		x[i]=1.0;
		u=u-w[i];	
	}
	if(i<n)
	x[i]=u/w[i];
	printf("\n\t------AMOUNT TAKEN------\n");
	for(i=0;i<n;i++)
	printf("%f\t",x[i]);
	printf("\t------PROFIT------\n");
	for(i=0;i<n;i++)
	z=z+p[i]*x[i];
	printf("\nPROFIT: %f",z);
	printf("\n");
}
