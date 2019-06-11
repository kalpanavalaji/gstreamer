#include<stdio.h>
#include<stdlib.h>
typedef struct node
  {
	int data;
	struct node *Nlink;
  }NODE;
NODE *Head=NULL;
		
void insertend(NODE *Temp,int N_ele)
{

//display function

void Print_LL(NODE *Temp)
{
	while(Temp!=NULL)
	{
		printf("data:%d------>",Temp->data);
		Temp=Temp->Nlink;
	}
}

//delete end

void deleteend(NODE *Temp)
{
	if(Head==NULL)
	{
		printf("Their is no elements for deleting\n"); 
	}
	else
	{
		NODE *Prev=Temp;
		while(Temp->Nlink!=NULL)
		{
			Prev=Temp;
			Temp=Temp->Nlink;
		}
		free(Temp);
		Prev->Nlink=NULL;
	}
}

//main function
int main()
{

	int N_nodes,N_ele,Count_nodes=1;
	int ch;

while(1)
{

	printf("\nenter 1.Insert\t2.Print\t3.Delete\n");
	scanf("%d",&ch);
	fflush(stdout);


switch(ch)
{
case 1:
	printf("\nEnter number of nodes you want\n");
	scanf("%d",&N_nodes);
	while(N_nodes--)
	{

		printf("\nEnter the %d node element\n",Count_nodes++);
		scanf("%d",&N_ele);

		insertend(Head,N_ele);//insert elements
	}
	break;

	//printing elements
case 2:
	Print_LL(Head);
	break;
case 3:
	deleteend(Head);
	break;
default:
	printf("choose correct option\n");
}
}

return 0;
}
