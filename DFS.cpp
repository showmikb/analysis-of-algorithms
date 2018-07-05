/* DFS */

#include<stdio.h>
int adj[][6]={};
int stack[10];
int top=-1;
void dfs();
void push(int);
int pop();
int visited[6]={0,0,0,0,0,0};
main()
{
	int d,i;
	push(0);
	visited[0]=1;
	d=pop();
	for(i=0;i<6;i++)
	{
		if(adj[d][i]==1 && visited[i]==0)
		{
			push(i);
			visited[i]=1;
		}
	}
	while(top>-1)
	{
		dfs();
	}
}

void dfs()
{
	int i,d;
	d=pop();
	for(i=0;i<6;i++)
	{
		if(adj[d][i]==1 && visited[i]==0)
		{
			push(i);
			visited[i];
		}
	}
}

void push(int a)
{
	top=top+1;
	stack[top]=a;
}

int pop()
{
	int d;
	d=stack[top--];
	printf("%d	",d);
	return(d);
}
