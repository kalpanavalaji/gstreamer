#include<stdio.h>
void quick_sort(int *,int ,int);
int partition(int *,int ,int);
void print_array(int *,int);
void swap(int *, int *);
int main()
{
	int arr[]={5,9,11,18,10};
	int end,start=0; 
	end=sizeof(arr)/sizeof(arr[0]);
		printf("Before quick sorting array is::\n");
	print_array(arr,end);
	quick_sort(arr,start,end-1);
	
	printf("After quick sorting array is::\n");
	print_array(arr,end);
}
//
void quick_sort(int *arr,int start,int end)
{
    if(start<end)
    {
	int p=partition(arr,start,end);
	quick_sort(arr,start,p);
	quick_sort(arr,p+1,end);
    }
}
//
int partition(int *arr,int s ,int e)
{
	int pivot=arr[e-1];
	int j=s-1;
	for(int i=s;i<e;i++)
	{
		if(arr[i]<=pivot)
		{
			j++;	
			swap(&arr[i],&arr[j]);

		}
	}
		j++;
		swap(&arr[j],&arr[e]);
return (j-1);
}
//print
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
//
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
