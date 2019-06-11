#include<stdio.h>
union endian {
	int a;
	char b;
	}u;
int main()
{
u.a=0x77124512;
               
printf("before converstion %x\n",u.a);
printf("u.a=%02X\n",u.a);
if(((char)u.b)==0x12)
	printf("the system is little endian %x\n",u.b);
else
	printf("the system is big endian %x\n",u.b);

u.a=((u.a>>24)&0x000000ff)|((u.a<<24)&0xff000000)|((u.a<<8)&0x00ff0000)|((u.a>>8)&0x0000ff00);
printf("after converstion %x\n",u.a);
}
