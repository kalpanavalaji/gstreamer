#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	if( ( ((n&(0x1<<2))==0) && ((n&(0x1<<4))==0) ) || ( ((n&(0x1<<2))!=0) && ((n&(0x1<<4))!=0) ) )
		n=n^((0x1<<2)|(0x1<<4));
	printf("%d\n",n);
}
