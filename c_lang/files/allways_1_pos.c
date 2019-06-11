#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	FILE *fp;
	char arr[100];
	int ch;
	fp=fopen("file.txt","w");
	while(1)
	{
		printf("enter a string\n");
		scanf("%s",arr);
		fprintf(fp,"%s ",arr);
		fseek(fp,-100,SEEK_CUR);
		//lseek(fp,0,SEEK_SET);
		printf("enter 1 for continue 0 for break\n");
		scanf("%d",&ch);
		if(ch==0)
			break;
	}
}
	
