#include<stdio.h>
#include<stdlib.h>
/*void digit_frq(char str[],char ch[])
{
	int count;
	for(int i=0;i<=9;i++)
	{
		count=0;
		for(int j=0;j<sizeof(str);j++)
		{
			if(str[j]==ch[i])
				count++;
		}
		printf("%d ",count);
	}
return 0;
}*/
int main()
{
	char *str,ch[10]={'0','1','2','3','4','5','6','7','8','9'};
	str=(char *)malloc(100*sizeof(char));
	printf("enter a string\n");
	scanf("%s",str);
	//digit_frq(str,ch);
 int count;

        for(int i=0;i<=9;i++)
        {
		count=0;
        	for(int j=0;str[j];j++)
        	{
                        if(str[j]==ch[i])
                                count++;
                }
                printf("%d ",count);
        }


}

