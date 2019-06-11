#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int ch[10]={0};
	str=(char *)malloc(sizeof(char));
	printf("enter a string\n");
	scanf("%s",str);
        int count;
        	for(int j=0;str[j];j++)
        	{
			if(str[j]<=57&&str[j]>=48){
                        	ch[str[j]-48]=ch[str[j]-48]+1;}
                }
		for(int i=0;i<=9;i++)
                	printf("%d ",ch[i]);
        


}

