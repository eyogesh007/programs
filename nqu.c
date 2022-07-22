#include <stdio.h>

int board[10][10],n;

int canweput(int r, int c)
{
	int i, j,row=r,col=c;
	for (i = 0; i < row; i++)
		if (board[i][col])
			return 0;
			
	row=r;col=c;		

	while(row>=0 && col>=0){
	    if(board[row][col])
	        return 0;
	        row--;
	        col--;
	}
	row=r;col=c;
	while(row>=0 && col<n){
	    if(board[row][col])
	        return 0;
	        row--;
	        col++;
	}	
	
	return 1;
}


void putbyrow(int row)
{
	if (row==n)
    {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf(" %d ", board[i][j]);
		printf("\n");
	}    
	printf("\n");
    }
    else{
	for (int i = 0; i < n; i++) {
		if (canweput(row, i)) {
			board[row][i] = 1;
			putbyrow(row + 1);
			board[row][i] = 0; 
			}
		}
	
    }

	return ;
}


int main()
{
	printf("enter no");
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			board[i][j]=0;
	}
	putbyrow(0);
	return 0;
}
