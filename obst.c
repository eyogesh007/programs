#include<stdio.h>
void main()
{
	int a[10][10]={10,20,30,40};
int w[10][10], c[10][10], r[10][10], p[10], q[10];
	int temp=0, root, min, min1, n;
	int i,j,k,b;	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("\n");
	for(i=1; i <= n; i++)
	{
		printf("Enter the Value of p[%d]:",i);
		scanf("%d",&p[i]);
	}
	printf("\n");
	for(i=0; i <= n; i++)
	{
		printf("Enter the Value of q[%d]:",i);
		scanf("%d",&q[i]);
	}
	printf("W\t\tC\t\tR\n");	
	for(i=0; i <= n; i++)
	{
		for(j=0; j <= n; j++)
		{
			if(i == j)
			{
				w[i][j] = q[i];
			 	c[i][j] = 0;
				r[i][j] = 0;
printf("W[%d][%d]: %d\t C[%d][%d]: %d\t  R[%d][%d]: %d\n",i,j,w[i][j],i,j,c[i][j],i,j,r[i][j]);
			}
		}
	}
	printf("\n");
	for(b=0;b<n;b++){
	    for(i=0,j=b+1;j<=n;i++,j++){
	        w[i][j]=w[i][j-1]+q[j]+p[j];
	        min=999;
	        for(k=i+1;k<=j;k++){
	            min1=c[i][k-1]+c[k][j];
	            if(min>min1){
	                min=min1;
	                temp = k;
	            }
	        }
	       		c[i][j] = min+w[i][j];
				r[i][j] = temp; 
	    
	    printf("w[%d][%d]=%d  c[%d]][%d]=%d r[%d][%d]=%d",i,j,w[i][j],i,j,c[i][j],i,j,r[i][j]);
	printf("\n");
	    }
	}

		printf("Minimum cost = %d\n",c[0][n]);
	root = r[0][n];
	printf("Root  = %d \n",root);
	}
