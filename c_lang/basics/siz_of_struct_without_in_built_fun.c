#include <stdio.h>
struct new{
int a;
char b;
float d;
};
int main()
{
	struct new *c;
	int  siz=((char*)(c+1))-(char*)c;
	printf("%d\n",siz);


}	
