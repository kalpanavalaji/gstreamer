
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
	char ch;
	char str[50];
    FILE *fp = fopen("test.txt", "r"); 
    if (fp == NULL) 
    { 
        puts("Couldn't open file"); 
        exit(0); 
    } 
    else
    { 	
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		
		fputc(ch,fp);
		printf("%c",ch);
		ch=fgetc(fp);     
        } 
	puts("Done");
        fclose(fp); 
    } 
    return 0; 
}

