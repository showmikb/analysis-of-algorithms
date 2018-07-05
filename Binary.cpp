/* binary search */

#include<stdio.h>
void binarysearch(int [],int,int);
int main()
{
	int data[100],n,item,i;
	printf("enter no of elements ");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	printf("enter the no to be searched ");
	scanf("%d",&item);
	binarysearch(data,n,item);
	return(0);
}


void binarysearch(int data[],int n,int item)
{
	int end,beg,mid;
	beg=0;end=n-1;mid=(end+beg)/2;
	while (beg<=end)
	{
		if(item==data[mid])
		{
			break;
		}
		else if(item<data[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(end+beg)/2;

	}
	if(beg>end)
	{
		printf("Search Unsuccessful\n");
	}
	else
	{
		printf("Search Successful\n");
		printf("found at the position %d\n",mid+1);
	}
}


