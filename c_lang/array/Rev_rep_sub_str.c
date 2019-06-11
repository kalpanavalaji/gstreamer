/*Q.1 : Find the substring in a word, reverse the substring and replace it. If multiple substrings are there reverse the last substring only.

Ex 1:string: helloworld
   substring:low
    o/p: helwolorld

Ex 2:string: helloworldhelloworld
    substring:low
    o/p: helloworldhelwolorld
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char *strrev(const char []);

int main()
{
	char a[100]="helloworld",b[10]="low";
	char *ch=strrev(b);
	int c=0,n=0,i=0,j=0,t=0;
	int r=strlen(b);
	printf("before:::%s\n",a);
	while(a[i]!='\0')
	{
	
		if(a[i]==b[j])
		{
			c=c+1;
			if(c==strlen(b))
			{
				t=i-r;
				n=n+1;
				printf("sub strings::n=%d\n",n);
			}
			i++;
			j++;
			continue;
		}
		else
		{
			c=0;
			i=i-j;
			j=0;
			
		}
		
		i++;	
	}
	i=0,j=0;t=t+1;
 	while(a[i]!='\0')
        {
		i++;		if(i==t)
				{
					while(r--)
					{
						a[i]=ch[j++];
						i++;
					}
				}
	}
	printf("after::%s\n",a);
}
	



char *strrev(const char str[])
{
        char *buff=(char *)malloc(sizeof(char)*strlen(str));
        memset(buff,'\0',sizeof(char)*strlen(str));
        for(int n=strlen(str)-1,j=0;n>=0;n--,j++)
                buff[j]=str[n];

        //printf("reverse string::%s",strrev(str));
        return buff;

}
int find_sub_string(char a[],char b[]
