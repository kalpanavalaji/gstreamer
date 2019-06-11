#include<stdio.h>
#define ROW 3
#define COLUM 3

int main()
{
	int a[ROW][COLUM];
	int j=0,k=0;
	printf("enter 2d array values\n");
	
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COLUM;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("print array values::\n");
	for(int k=0;k<ROW;j++)
	{
		
		if(j<COLUM)
		{
			printf("%d \t",a[k][j]);
			continue;
		}
		j=-1;
		k++;
		printf("\n");
		
	}
}























/*for(int i=0;i<=COLUM;i++)
	{
		
		if(j<COLUM)
		{
			printf("%d \t",a[k][j]);
			j++;
			continue;
		}
		if(k<ROW)
		{
			j=0;
			i=-1;
			k++;
		}
		printf("\n");
		if(k==ROW)
			break;

	}*/
