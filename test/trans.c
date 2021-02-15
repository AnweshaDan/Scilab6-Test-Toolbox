// This c program computes the tranpose of a matrix
#include <stdio.h> 
void trans(int *arr, int n, int m) 
{ 
    int trans[n][m];
	int i, j; 
	for (i = 0; i < n; i++) 
    {
	for (j = 0; j < m; j++) 
    {
        trans[i][j]=*((arr+j*m) + i);
        printf("%d ",trans[i][j]);
    }
     printf("\n");
    }
     
} 

