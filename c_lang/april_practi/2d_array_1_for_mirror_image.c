#include<stdio.h>
#define ROW 3
#define COLUM 3
void enter_array(int a[ROW][COLUM])
{
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COLUM;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void print_array(int a[ROW][COLUM],int flag)
{
	int j=0,k=0;
	for(int k=0;k<ROW;j++)
	{
		
		if(j<COLUM)
		{
			if(flag)
				printf("%d \t",a[k][j]);
			else
				printf("%d \t",a[k][COLUM-j-1]);
			continue;
		}
		j=-1;
		k++;
		printf("\n");
		
	}
}

int main()
{
	int a[ROW][COLUM];
	
	printf("enter 2d array values\n");
	enter_array(a);
	printf("print array values::\n");
	print_array(a,1);
	printf("printf mirror image::\n");
	print_array(a,0);
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
