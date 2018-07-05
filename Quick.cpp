/* quick sort */

#include<stdio.h>
void quick(int [],int,int);
int i,n;
int main()
{
	int i,a[100],n;
	printf("enter the no of elements ");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);
	printf("after sorting the array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return(0);
}


void quick(int a[],int f,int l)
{
	int pivot,temp,low,high;
	low=f;high=l;
	pivot=a[(low+high)/2];
	do
	{
		while(a[low]<pivot)
		{
			low++;
		}
		while(pivot<a[high])
		{
			high--;
		}
		if(low<=high)
		{
			temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			low++;
			high--;
		}
	}while(low<=high);
	if(f<high)
	{
		quick(a,f,high);
	}
	if(low<l)
	{
		quick(a,low,l);
	}
	printf("\n");
}


