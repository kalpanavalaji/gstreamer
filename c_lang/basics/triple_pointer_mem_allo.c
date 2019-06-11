#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=3;
	int ***X = (int ***) malloc(sizeof(int**) * n); //FIX 1
	for(int i = 0; i < n; i++)
	{
		  X[i] = (int **) malloc(sizeof(int*) * n);  // FIX 2
		  for(int j = 0; j < n; j++){
			    X[i][j] = (int *) malloc(sizeof(int) * n);
		  }
	}
	X[1][0][0]=2;
	printf("%d",X[1][0][0]);

	printf("%d",X[1][0][1]);
}

