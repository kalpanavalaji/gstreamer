#include<stdio.h>
#include<stdlib.h>
/*int main()
{
int a=10;
int *p=&a;
printf("*p::%d\tp:%p\n",*p,p);
free(p);
//printf("*p::%d\tp::%p\n",*p,p);
}          */
int *fun() 
{ 
    // x is local variable and goes out of 
    // scope after an execution of fun() is 
    // over. 
    int x = 5; 
  
    return &x; 
} 
  
// Driver Code 
int main() 
{ 
    int *p = fun(); 
    fflush(stdin); 
  
    // p points to something which is not 
    // valid anymore 
    printf("%d", *p); 
    return 0; 
} 
