#include<stdio.h>
int main()
{
int i,j;
int a[][3]={{1,2,3} ,{4,5,6},{7,8,9}};
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\t",a[i][j]);
	}

	for(i=i+1;i<3;j++)
	{
	printf("%d\t",a[i][j]);
	}
	for(j;j>=0;j++)
	{
	printf("%d\t",a[i][j]);
	}
	--i;
	for(j=0;j<1;j++)
	{
	printf("%d\t",a[i][j]);
	}
	break;
}
}
