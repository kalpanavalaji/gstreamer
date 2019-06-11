#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a;
	a=(int **)malloc(sizeof(int *)*3);//r
	for(int i=0;i<3;i++)
	{
			a[i]=(int *)malloc(sizeof(int)*3);//c
			
	}
	printf("sizeofa%ld\n",sizeof(a));
	printf("sizeofa[]::%ld\n",sizeof(*a));

in
}
