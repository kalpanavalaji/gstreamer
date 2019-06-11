#include<stdio.h>
int main()
{
int pos1=2,pos2=4,n;
while(1)
{
	
	printf("enter number:\n");
	scanf("%d",&n);
	if( ( ( (n&(0x1<<pos1)==0)) && ((n&(0x1<<pos2))==0) )|| ( ((n&(0x1<<pos1)!=0)) && ((n&(0x1<<pos2))!=0)) )
		n=n^((1<<pos1)|(1<<pos2));

	printf("num==%d\n",n);
}
}
