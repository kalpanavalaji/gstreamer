//reset first set bit in a given number
#include<stdio.h>
int main()
{
	int num,n,i=0;
	while(1)
	{
		printf("enter a number\n");
		scanf("%d",&num);
		n=num;
		while(n)
		{
			//printf("%d",i);
			if(n&1==1){
			//	printf("%d",i);
				num=num&(~(1<<i));
				break;
			}
			n=n>>1;
			i++;
		}
		printf("%d",num);
	}
}

