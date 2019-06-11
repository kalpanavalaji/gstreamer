#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char ch;
FILE *fp;
int i;
fp=fopen("read.txt","r");
ch=fgetc(fp);
while(ch!=EOF)
{
//printf("ascii ch=%d\n",ch);

//printf("char ch=%c\n",ch);
if(ch!=' '){
i=atoi(&ch);
printf("i=%d\n",i);
}
ch=fgetc(fp);
}
}
