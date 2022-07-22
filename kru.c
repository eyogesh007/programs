#include<stdio.h>
int i,j,k,a,b,u,v,n,ne=0;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
void main()
{
	printf("\n\tImplementation of Kruskal's algorithm\n");
	printf("\nEnter the no. of vertices:");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix:\n");
	for(i=0;i<n;i++)
	    parent[i]=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	printf("The edges of Minimum Cost Spanning Tree are\n");
	while(ne<n){
	    for(i=0;i<n;i++){
	        min=999;
	        for(j=0;j<n;j++){
	            if(cost[i][j]<min){
	                min=cost[i][j];
	                a=i;
	                b=j;
	            }
	        }
	    
	        u=find(a);
	        v=find(b);
	        if(uni(u,v)){
	        printf("%d--%d  %d\n",a+1,b+1,min);
	        mincost+=min;
	        }
	        cost[a][b]=cost[b][a]=999;
	    }
            ne++;
	}
	
	printf("\nMinimum cost = %d\n",mincost);
}
int find(int i)
{
    while(parent[i]!=-1)
    {
        i=parent[i];
    }
    return i;
}

int uni(int i,int j)
{
    if(i!=j){
        parent[j]=i;
        return 1;
    }
    return 0;
}
