#include<stdio.h>
int main()
{
}
char *strrev(const char *str)
{
        printf("hi\n");
        char *buff=(char *)malloc(sizeof(char)*strlen(str));
        memset(buff,10,sizeof(char)*strlen(str));
        for(int n=strlen(str)-1,j=0;n>=0;n--,j++)
                buff[j]=str[n];

        //printf("reverse string::%s",strrev(str));
        return buff;

}

