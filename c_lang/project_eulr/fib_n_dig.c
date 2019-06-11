#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 5000
long long numberOfDigits(long long n) 
{ 
    if (n == 1) 
        return 1; 
    // using phi = 1.6180339887498948 
    long double d = (n * log10(1.6180339887498948)) - ((log10(5)) / 2); 
    return ceil(d); 
} 
  
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

   long long int f=1,s,m=0,m1;
    int num,test;
   long long int arr[size];
    for(int i=1;i<=5000;i++)
    {
        
            arr[i]=numberOfDigits(i);
       
    }
	scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
			scanf("%d",&num);
   		 for(int j=1;j<=5000;j++)
        	{
          		if(num==arr[j]){
              		  	printf("%d\t",j);
 				break;
			}      
	         }
       }
    
}
/*
 for(int i=1;i<=5000;i++)
    {
        s=f;
        f=m;
        m=s+f;
        if(m>9)
        {
            m1=numberOfDigits(m);
            sum=0;
           while(m1)
            {
                sum=sum+m1%10;
                m1=m1%10;
            }
            
             arr[i]=m1;
        }
        else
             arr[i]=1;
    }
        
    scanf("%d",&test);

    for(int k=1;k<=test;k++)
    {
        scanf("%d",&num);    
    
        for(int j=1;j<=5000;j++)
        {
            if(num==arr[j]){
                    printf("%d",j);
                    j=5001;
            }
       }
    }
    */

