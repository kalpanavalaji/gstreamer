#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int j=0;
	printf("enter main and sub string\n");
	scanf("%s %s",str1,str2);
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str2[j]==str1[i])
		{
			j++;
			if(j==strlen(str2))
				break;
		}
		else
			j=0;
	}
	if(strlen(str2)==j)
		printf("%s is substring of  %s \n\n",str2,str1);
	else
		printf("their is no sub string\n");
}

