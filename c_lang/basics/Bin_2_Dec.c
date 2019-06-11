#include<stdio.h>
//#include<math.h>
int main()
{
	int dec=0,bin=111,rem,i=1;
while(bin)
{
	rem=bin%10;
	bin=bin/10;
	dec=dec+rem*i;
	i=i*2;
	
}
printf("%d",dec);

}
