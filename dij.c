#include <stdio.h>
int n,g[5][5],visited[10],weight[10],getmin();
void prims();
int main() {
    // Write C code here
    int i,j,v;
    
     printf("emter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          scanf("%d",&g[i][j]);


     for(i=0;i<n;i++)
     visited[i]=0;
     
     for(i=0;i<n;i++)
     {
       weight[i]=999;
       visited[i]=0;
     }
     

     printf("enter source vertex");
     scanf("%d",&v);
     weight[v]=0;     
     dij();
    for(i=0;i<n;i++)
      printf("%d--%d  %d \n",v,i,weight[i]);
    return 0;
}

void dij()
{
    int i;
    for(int k=0;k<n-1;k++){
    i=getmin();
    visited[i]=1;
    for(int j=0;j<n;j++)
    {
        if(g[i][j]!=0 && visited[j]==0 && weight[i]+g[i][j]<weight[j])
        {
            weight[j]=g[i][j]+weight[i];
        }
    }
    }
}

int getmin()
{
    int i,j,min=999;
    for(i=0;i<n;i++)
        if(visited[i]==0 && weight[i]<min)
           {
               min=weight[i];
               j=i;
           }   
    return j;       
}
