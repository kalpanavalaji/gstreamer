#include<stdio.h>
void sum(int i)
{
static int add=0;
if(i)
{
	add=add+i;
	//printf("%d\t",i);
	sum(--i);
}
else
	printf("sum::%d\n",add);
printf("i::%d\n",i);
}
int main()
{
int i=5;
sum(i);
}
