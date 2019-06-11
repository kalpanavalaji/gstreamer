#include<stdio.h>
int main()
{
	int a=9,s=0,j=1,r;
	for(int i=0;i<32;i++)
	{
		r=a&1;
		s=s+j*r;
		a>>=1;
		i=i*10;
	}
	printf("%d",s);
}
