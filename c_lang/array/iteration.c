#include<stdio.h>
#include<stdlib.h>
void insert_ele_array(int *,int );
void print_array(int [],int );
void shif_array(int n_itr,int arr[],int size);
int main()
{
	int n_itr=0,size,b,i,ch,n;
	int *arr;
	//size=sizeof(arr)/sizeof(arr[0]);
	//printf("size::%d",size);
	while(1)
	{
		
		printf("Enter ::1.give input to the array\t2.Print th array\t 3.shift the array depend on iterations\n ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the size of array\n");
				scanf("%d",&n);
				//insert_ele_array(arr,n);
				//printf("enter the arr[1] ::%d element\n",arr[1]);
				//print_array(arr,n);
				arr=(int *)malloc(sizeof(int)*n);
				i=0;
				while(i!=n)
				{	
					printf("enter the element ::%d",i);
					scanf("%d",&arr[i++]);
				}
				break;
			case 2:
				print_array(arr,n);
				break;
			case 3:
				printf("\nenter number of iterations u want to iterate\n");
				scanf("%d",&n_itr);
				shif_array(n_itr,arr,n);
				break;
			

			default:
				printf("\nchoose Proper option\n");
				break;
		}
	}

	
}

void shif_array(int n_itr,int arr[],int size)
{
	int i=0,b;
			
 		while(n_itr--)
                {
			
                        i=0;
                                b=arr[0];
                                printf("b::%d",b);
                        while(i!=size)
                        {
                                arr[i]=arr[i+1];
				i++;
				
                        }
                                arr[i-1]=b;
                }



}

//printing elements
void print_array(int arr[],int size)
{
	int i=0;
	while(size--)
	{
		printf("\narr[%d]=%d\n",i,arr[i]);
		i++;
	}
printf("\n");
}

//inserting the elements to the array

void insert_ele_array(int *arr,int n)
{
	int i=0;

	arr=(int *)malloc(sizeof(int)*n);
			
	while(i!=n)
	{	
		printf("enter the arr[%d] element\n",i);
		scanf("%d",&arr[i]);
		printf("enter the arr[%d] ::%d element\n",i,arr[i]);
		i++;
	}
}
