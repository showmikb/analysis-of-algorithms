/* dijkstrasalgorithm */

#include<stdio.h>
void djk(int [][7],int);
int visited[]={0,0,0,0,0,0,0};
main()
{
	int adj[][7]={{99,7,1,99,99,99,99},
				{99,99,99,8,99,2,99},
				{99,3,99,99,3,4,99},
				{99,2,99,99,99,1,99},
				{99,99,99,10,99,4,7},
				{99,99,99,99,99,99,2},
				{99,99,99,2,99,99,99}};
	djk(adj,7);	
}

void djk(int adj[][7],int n)
{
	int dist[]={0,99,99,99,99,99,99};
	int i,j,k,temp,z,z1,min=0,d;
	printf("Enter destination vertex: ");
	scanf("%d",&d);
	for(k=0;k<n;k++)
	{
		for(z1=0;z1<n;z1++)
		{
			if (visited[z1]==0)
			{
				min=z1;
				break;
			}
		}
		printf("\n");
		for(z=0;z<n;z++)
		{
			if(dist[z]<dist[min] && visited[z]==0)
			{
				min=z;
			}
		}
		for(i=0;i<n;i++)
		{
			printf(" %d",dist[i]);
		}
		printf("\nMINIMUM TABLE %d: ",dist[min]);
		visited[min]=1;	
		if(min==d)
		{
			printf("\nSolution is %d  ",dist[min]);
			break;
		}
		for(j=0;j<n;j++)
		{
			if(dist[j]>dist[min]+adj[min][j] && visited[j]==0)
			{
				dist[j]=dist[min]+adj[min][j];
			}
		}
	}
}


