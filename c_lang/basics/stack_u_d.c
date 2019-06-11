#include<stdio.h>
int main()
{
	int a,b;
	printf("a=%p b=%p\n",&a,&b);
	if(&a<&b)
		printf("stack grows upwards\n");
	else
		printf("stack grows downwards\n");
}
