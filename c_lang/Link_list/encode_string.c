#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *Nlink;
}NODE;
NODE *Head=NULL;

NODE *create_node(NODE *New,int N_ele)
{
	New=(NODE *)malloc(sizeof(NODE));
        New->data=N_ele;
        New->Nlink=NULL;
	return New;
}
	
void insertend(NODE *Temp,int N_ele)
{
	NODE *New=create_node(Temp,N_ele);
	if(Head==NULL)
	{
		Head=New;
	}
	else
	{
		NODE *Prev=Temp;
		while(Temp->Nlink!=NULL)
		{
			Prev=Temp;
			Temp=Temp->Nlink;
		}
		Temp->Nlink=New;
	}
}
//display function


void Print_LL(NODE *Temp)
{
	if(Temp!=NULL)
	{
		printf("temp address::%p\tdata:%d\n",Temp,Temp->data);
		Temp=Temp->Nlink;
		Print_LL(Temp);
	}
}




//main function
int main()
{

	int N_nodes,N_ele,Count_nodes=1;
	int ch;
	NODE *las_addr;
	
while(1)
{

	printf("\nenter 1.Insert\t2.Print\t\n");
	scanf("%d",&ch);
	//fflush(stdout);


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


default:
	printf("choose correct option\n");
}
}
return 0;
}
