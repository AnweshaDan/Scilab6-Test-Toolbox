#include<stdio.h>
#include "trans.h"
int main() 
{ 
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	int n = 3, m = 3; 
 
	trans((int *)arr, n, m); 
	return 0; 
} 