#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *right,*dn;
}NODE;

NODE *Head=NULL;

	
NODE *insertend(int arr[][3],int i,int j,int l,int m)
{
	if((i>l-1)||(j>m-1))
		return NULL;
	NODE *New=(NODE *)malloc(sizeof(NODE));
        New->data=arr[i][j];
       
	New->right=insertend(arr,i,j+1,l,m);
	New->dn=insertend(arr,i+1,j,l,m);
	return New;
	
}
/*
void Print_LL(NODE *Temp)
{
	NODE *Temp2=Temp,*Temp1=Temp;
	if(Temp==NULL)
		return;
	while(Temp2!=NULL)
	{
		 Temp1=Temp2;
		while(Temp1!=NULL)
		{
			//printf("temp address::%p\tdata:%d\n",Temp,Temp->data);
			printf("%d->\t",Temp1->data);
			Temp1=Temp1->right;
		}
		
		printf("\n");
		Temp2=Temp2->dn;
	}
	
}*/
void Print_LL(NODE *Temp)
{
	
	if(Temp==NULL)
		return;
	
	printf("%d->\t",Temp->data);
	Print_LL(Temp->right);
	printf("\n");
	Print_LL(Temp->dn);
	
	
}
/*
void Print_LL(NODE *Temp)
{
	if(Temp!=NULL)
	{
		//printf("temp address::%p\tdata:%d\n",Temp,Temp->data);
		printf("%d->\t",Temp->data);
		Temp=Temp->right;
		Print_LL(Temp);
	}
	printf("\n");
}

void array_enter(int arr[])
{	
	k=1;
	printf("Matrix elements\n");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			a[i][j]=k++;
}*/
/*
void array_print(int arr[][])
{	
	printf("Matrix elements\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
}
void array_LL(int arr[],NODE *Head)
{
	int k=0,m=0;
	for(int i=0;i<3;i++){
		
		for(int j=0;j<3;j++){
			k=arr[i][j];
			Head[m]=insertend(head,k);}
		printf("\n");
		m++;
	}*/
		
//main function
int main()
{
	
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int l=3,m=3,i=0,j=0;
//array_print(arr);
printf("insert array elements in linked list\n");
Head=insertend(arr,i,j,l,m);
printf("linked list elements\n");
Print_LL(Head);


return 0;
}
