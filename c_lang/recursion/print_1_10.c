#include<stdio.h>
void print(int i)
{
if(i<=10)
{
	printf("%d\t",i++);
	print(i);
}
}
int main()
{
int i=1;
print(i);
}
