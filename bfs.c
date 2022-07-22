#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void BGT(int n)
{
   int i;
   for(i=0;i<n;i++)
        visited[i]=0;
   for(i=0;i<n;i++)
     {
        if(visited[i]==0){
        visited[i]=1;
         printf("%d\n",i);
          BFS(i);
            
        }
     } 
}

void BFS(int v) {
	for(i=0;i<n;i++)
	  if(a[v][i]==1 && visited[i]==0){
	   q[++r]=i;
	   visited[i]=1;
	   printf("%d\n",i);
	  }
	if(f<=r) {
		v=q[f];
		f++;
		BFS(v);
	  }
    
}
void main() {
	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	printf("\n Enter graph data in matrix form:\n");
	for (i=0;i<n;i++)
	  for (j=0;j<n;j++)
	   scanf("%d",&a[i][j]);
	BGT(n);

}
