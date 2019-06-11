#include<stdio.h>
#include<math.h>

int sign_Char(int);
int sign_int(int );



int main()
{
	unsigned int snum;
	//unsigned char snum;
					//4byte :Range of signed:: int -2147483648 to 2147483647
	while(1)
	{
		printf("\nenter a  number\n");
		scanf("%d",&snum);
	
		printf("unsigned number:::%u\n",snum);
		//sign_Char(snum);
		sign_int(snum);
	
	
	}
}

int sign_int(int unum)
{
	
	if(unum>(pow(2,31)-1)||unum>(pow(2,15)-1)||unum>(pow(2,63)-1))
	{
		if(sizeof(unum)==4)
		{
			unum=-(pow(2,31))-(pow(2,31)-1)+unum-1;

		}
		else if(sizeof(unum)==2)
		{
			unum=-(pow(2,15))-(pow(2,15)-1)+unum-1;
		}
		else
		{
			unum=-(pow(2,63))-(pow(2,63)-1)+unum-1;
		}	
	}
		printf("signed number:::%d\n",unum);
}



int sign_Char(int unum)
{

	if(unum>(pow(2,7)-1))
	{
		unum=-((pow(2,7))+(pow(2,7)-1))+unum-1;
		printf("unsigned number:::%d\n",unum);

	}
	
		printf("signed number::%d\n",unum);
}

