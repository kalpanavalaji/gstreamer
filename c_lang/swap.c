#include<stdio.h>
void swap(int *,int *);
int main()
{
int a=4,b=8;

swap(&a,&b);

}
void swap(int *a,int *b)
{
printf("before:%d %d\n",*a,*b);
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
printf("\nafter:%d %d\n",*a,*b);
}
