
#include<stdio.h>
int main()
{
char ch;
while(1)
{
__fpurge(stdin);
printf("enter 1.one 2.two 3.three\n"); 
scanf("%c", &ch);
printf("entered data is :%c\n",ch);
switch(ch)
{
	case '1':
		printf("one\n");
		
		break;
	case '2':
		printf("Two\n");
		break;
	case '3':
		printf("Three\n");
		break;
	default:
		printf("invalid\n");
		
}
}
return 0;
}
