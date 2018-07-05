/* merge sort */

#include<stdio.h>
void mergesort(int [],int,int);
void merge(int [],int,int,int,int);
main()
{
	int a[100],i,n,lb,ub;
	printf("enter the length of the array ");
	scanf("%d",&n);
	printf("enter the terms of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lb=0;ub=n-1;
	mergesort(a,lb,ub);
	printf("After Sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return(0);
}


void mergesort(int a[],int lb,int ub)
{
	int mid;
	mid=(lb+ub)/2;
	if(lb<ub)
	{
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,mid+1,ub);
	}
}

void merge(int a[],int low1,int up1,int low2,int up2)
{
	int p,q,n;
	int d[100];
	p=low1;q=low2;n=0;
	while((p<=up1) && (q<=up2))
	{
		d[n++]=a[p]<a[q]?a[p++]:a[q++];
	}
	while(p<=up1)
	{
		d[n++]=a[p++];
	}
	while(q<=up2)
	{
		d[n++]=a[q++];
	}
	for(q=low1,n=0;q<=up2;q++,n++)
	{
		a[q]=d[n];
	}
}

