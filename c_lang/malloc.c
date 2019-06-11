#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr=(int *)malloc(sizeof(int));
printf("\nptr=%p",ptr);
int *p=ptr;
printf("\np=%p",p);
p=(int *)malloc(sizeof(int));
printf("\np=%p\tptr=%p\n",p,ptr);
}
