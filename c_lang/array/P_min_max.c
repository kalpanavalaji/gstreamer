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
void Minorder(int ,int * );
void print(int []);

int insert(int a[]);
int main()
{
	int min=0,max=0;
	int a[20];
	int i=0,j=0;
	int n,r,ch;
while(1)
{
	printf("\nenter 1.insert\t 2.Print array\t 3.array for min order \t4.Min and max elements sum\t 5.print min and Max sum\n");
	scanf("%d",&ch);
 
	switch(ch)
	{
	case 1:
		n=insert(a);
		r=n;
		break;
	case 2:
		print(a);
		break;
	case 3:
		Minorder(n,a);
		break;
	case 4:
		printf("min max sum\n");
		for(i=0;i<=(r-2);i++)
			min=min+a[i];
		for(i=(r-1);i!=0;i--)
			max=max+a[i];
		break;
	case 5:
		printf("\nmin::%d\t max::%d\n",min,max);
		break;
	default:
		printf("\nchOOse proper option\n");
	}
}

}

void Minorder(int n,int * a)
{
	int t;
	for(int i=0;i<n;i++)
        {
		
		
	print(a);
                for(int j=i;j<(n-1);j++)
                {
                        if(a[i]>a[j+1])
                        {
                                t=a[i];
                                a[i]=a[j+1];
                                a[j+1]=t;
                       }
			printf("%d\n",j);
	
                }
                
        }
}
void print(int a[])
{
	for(int i=0;i!=5;i++)
        	printf("a[%d]::%d\t",i,a[i]);
	printf("\n");
}
int insert(int a[])
{
int i;
	for(i=0;i!=5;i++)
		scanf("%d",&a[i]);
return i;
}
