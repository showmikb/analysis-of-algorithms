/* Graph Colouring */

#define V 4
#include<stdio.h>
void graphcolor(int adj[][4],int m);
int graphco(int adj[][4],int color[],int m,int v);
int issafe(int adj[][4],int color[],int c,int v);
int print(int []);
main()
{
	int adj[][4]={1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1};
	int m=3;
	graphcolor(adj,m);
}

void graphcolor(int adj[][4],int m)
{
	int color[]={0,0,0,0};
	if (graphco(adj,color,m,0)==0)
	{
		printf("NO RESULT");
		return;
	}
	print(color);
}

int print(int color[])
{
	int i;
	for(i=0;i<V;i++)
	{
		printf("%d",color[i]);
		printf("\n");
	}
}

int graphco(int adj[][4],int color[],int m,int v)
{
	int c;
	if(v==V)
	return 1;
	for(c=1;c<=m;c++)
	{
		if (issafe(adj,color,c,v)==1)
		{
			color[v]=c;
			if(graphco(adj,color,m,v+1)==1)
			return 1;
			else color[v]=0;
		}
	}
	return 0;
}

int issafe(int adj[][4],int color[],int c,int v)
{
	int i;
	for(i=0;i<=4;i++)
	{
		if((adj[v][i]==1) &&(c==color[i]))
		return 0;
	}
	return 1;
}
