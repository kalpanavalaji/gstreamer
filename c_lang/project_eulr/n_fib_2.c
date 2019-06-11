#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 25000
  long long int numberOfDigits(long long int n) 
{ 
    if (n == 1) 
        return 1; 
  
    // using phi = 1.6180339887498948 
    long double d = (n * log10(1.6180339887498948)) - 
                    ((log10(5)) / 2); 
  
    return ceil(d); 
} 
  
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int num,test;
   long long int arr[size];
   scanf("%d",&test);
    for(int i=1;i<size;i++)
    {
        
            arr[i]=numberOfDigits(i);
                         		
    }

    for(int i=1;i<=test;i++)
    {
	int j=1;
	printf("enter n\n");
            scanf("%d",&num);
	   			 printf("%d\n",num);
            for(j=1;arr[j]&&(num!=arr[j]);j++);
            
	   		
		 printf("..........%d\n",j);

		num=0;     
             
       }
    
}
