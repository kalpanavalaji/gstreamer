#include<stdio.h>
#include<math.h>

int unsign_Char(int);
int unsign_int(int );



int main()
{
	int snum;
	//char snum;
		//4byte :Range of signed:: int -2147483648 to 2147483647
while(1)
{
	printf("enter a  number\n");
	scanf("%d",&snum);
	
	printf("signed number:::%d\n",snum);
	//unsign_Char(snum);
	unsign_int(snum);
	
	
}
}

int unsign_int(int unum)
{
	
	if(unum<0)
	{
		if(sizeof(unum)==4)
		{
			unum=(pow(2,31))+(pow(2,31)-1)+unum+1;

		}
		else if(sizeof(unum)==2)
		{
			unum=(pow(2,15))+(pow(2,15)-1)+unum+1;
		}
		else
		{
			unum=(pow(2,63))+(pow(2,63)-1)+unum+1;
		}	
	}
		printf("unsigned number:::%d\n",unum);
}



int unsign_Char(int unum)
{

	if(unum<0)
	{
		unum=(pow(2,7))+(pow(2,7)-1)+unum+1;
	}
	
		printf("unsigned number::%d\n",unum);
}

