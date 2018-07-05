/* BFS */

#include<stdio.h>
int adj[][6]={};
int queue[10];
int end=-1,front=0;
void bfs();
void insert(int);
int rem();
int visited[6]={0,0,0,0,0,0};
main()
{
	int d,i;
	insert(0);
	visited[0]=1;
	d=rem();
	for(i=0;i<6;i++)
	{
		if(adj[d][i]==1 && visited[i]==0)
		{
			insert(i);
			visited[i];
		}
	}
	while(end>=front)
	{
		bfs();
	}
}

void bfs()
{
	int i,d;
	d=rem();
	for(i=0;i<6;i++)
	{
		if(adj[d][i]==1 && visited[i]==0)
		{
			insert(i);
			visited[i];
		}
	}
}

void insert(int a)
{
	end=end+1;
	queue[end]=a;
}

int rem()
{
	int d;
	d=queue[front++];
	printf("%d	",d);
	return(d);
}
