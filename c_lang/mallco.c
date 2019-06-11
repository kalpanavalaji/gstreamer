#include<stdio.h>
#include<stdlib.h>
int main()
{
//char a='k';
 char *p=malloc(10);
 *p="hello";
	printf("%c",*p);
}
