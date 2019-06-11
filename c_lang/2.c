#include<stdio.h>
int a=10;
#define a b
int fun()
{
	int a=20;

	printf("%d",a);
}
int main()
{
//int *ptr=&a;
//int a=19;
//printf("%d\n",*ptr);
//printf("%d\n",a);
fun();
}

