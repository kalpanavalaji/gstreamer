#include<stdio.h>
int main()
{
	int n,max,m,p,k,z,l;
	printf("enter n\n");
	scanf("%d",&n);
	max=n+(n-1);
	for(int i=0;i<max;i++)
	{
		p=n;k=0;l=0,z=0;
		for(int j=0;j<max;j++)
		{
			if(i==j){
				z=p;
				p=n-i;
				if(p<=0)
					p=z;
			}
			if(((max-i)-1)<j)
			{
				if(j>i)
					p=p+(1);
			}
			if((i>j)&&((max-(i+j))>0))
				p=n+(k--);
		
			printf("%d\t",p);
		}
		printf("\n");
	}
			
}
