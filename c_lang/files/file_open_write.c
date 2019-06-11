
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
	int i=0;
	char str[50];
    FILE *fp = fopen("test.txt", "a"); 
    if (fp == NULL) 
    { 
        puts("Couldn't open file"); 
        exit(0); 
    } 
    else
    { 	
	while(i<3)
	{
	fgets(str,50,stdin);//read from user
	printf("\n");
        fputs(str, fp); //write to the test.txt file
	i++;
        } 
	puts("Done");
        fclose(fp); 
    } 
    return 0; 
}

