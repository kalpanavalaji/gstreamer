#include<stdio.h>
int main()
{
	int num,num1;
	printf("enter number\n");
	scanf("%d",&num);
	int n=num,i=0;
	for( i=0;i<32;i++)
	{
		if(n&1==1)
			break;
		n>>=1;
	}
	num1=num&(num-1);
	num=num&(~(1<<i));
	printf("num=%d \ti=%d\t num1::%d\n",num,i,num1);
}
