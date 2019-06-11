#include<stdio.h>
#include<string.h>
#include <stdbool.h> 
#include <stdlib.h>

#define size 26
#define max 100
int main()
{
	char b1[max],b2[max];
	bool a[size];
	int n=0,n1=0,c=0;
	printf("enter only capital strings b1 and b2 \n");
	scanf("%s %s",b1,b2);
	if(strlen(b1)==strlen(b2))
	{		
		//printf("%d\n",strlen(b1));
		//printf("%d\n",strlen(b2));
		for(int i=0;i<strlen(b1);i++)
		{
			n=b1[i]-65;
							
			if(a[n]==0)
				a[n]=1;
			
		}
		for(int j=0;j<strlen(b2);j++)
		{
			
			n1=b2[j]-65;
											
			if(a[n1]==1)
			{	
				c++;
				a[n1]=0;
			}
		}
	}
	if(c==strlen(b1))
		printf("given strings are anagrams\n");
	else
		printf("Not anagrams\n");
return 0;
}
