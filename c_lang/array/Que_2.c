/*Q-2: Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers

For example, arr=[1,3,5,7,9]
.
Our minimum sum is 1+3+5+7=16
 and our maximum sum is 3+5+7+9=24
.
We would print 16 24

function prototype should be:
    void funName(int arr_count,int * arr);
*/ 
#include<stdio.h>
#include<string.h>
int main()
{
	int min,max;
	int a[]={1,2,3,4,5};
	int i=0,j=0;
	int t,n,r;
	n=sizeof(a)/sizeof(a[0]);
	printf("siz::%d",n);
	r=n;
	for(i=0;n!=0;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(a[i]==a[j+1])
			{
				t=a[i];
				a[i]=a[j+1];
				a[j+1]=t;
			}
		}
		//--n;
	}
	for(i=0;i<(n-1);i++)
		min=min+a[i];
	for(i=n;i!=1;i--)
		max=max+a[i];
printf("min::%d\t max::%d\n",min,max);
}



