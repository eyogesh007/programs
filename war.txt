#include<stdio.h>
#define n 3
void printSolution(int dist[][n])
{
printf ("The following matrix shows the shortest distances"
            " between every pair of vertices \n");
    for (int i = 0; i< n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dist[i][j] == 1000)
printf("%7s", "INF");
            else
printf ("%7d", dist[i][j]);
        }
printf("\n");
    }
}
void floydWarshall (int cost[][n])
{
int dist[n][n], i, j, k;
    for (i = 0; i< n; i++)
        for (j = 0; j < n; j++)
dist[i][j] = cost[i][j];
    for (k = 0; k < n; k++)
    {
        for (i = 0; i< n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] <dist[i][j])
dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
printSolution(dist);
}

int main()
{
int cost[n][n];
int i,j;
printf("Enter cost in form of adjacency matrix\n");
    //input graph
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
scanf("%d",&cost[i][j]);
            // cost is 0 then initialize it by maximum value
            if(cost[i][j]==0 &&i!=j)
              cost[i][j]=1000;
        }
    }
floydWarshall(cost);
   return 0;
}
