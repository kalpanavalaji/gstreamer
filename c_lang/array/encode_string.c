#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100
int main()
{
	char src[size],*des,c_count[10];
	int count=1,j=0,m=0;
	printf("enter a string for encoding\n");
	scanf("%s",src);
	des=(char *)malloc(sizeof(char)*(strlen(src)*2+1));
	for(int i=0;i<strlen(src);i++)
	{
		des[j++]=src[i];
		
		for(int k=i+1;src[i]==src[k];k++)
		{
			count++;
			i++;
		}
        sprintf(c_count, "%d", count); 
		printf("%c",c_count[m++]);
	  for (int k = 0; *(c_count + k); k++, j++)
				des[j++]=c_count[k];
		
	}
	des[j]='\0';
	printf("des:::::%s\n",des);
}
