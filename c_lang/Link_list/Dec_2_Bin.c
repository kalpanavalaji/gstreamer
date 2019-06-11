#include<stdio.h>
//#include<math.h>
int main()
{
	int dec_v=8,bin=0,rem,i=1;
while(dec_v)
{
	rem=dec_v%2;
	dec_v=dec_v/2;
	bin=bin+rem*i;
	i=i*10;
}
printf("%d",bin);

}
