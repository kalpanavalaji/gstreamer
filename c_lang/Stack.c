#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
	int data;
	struct stack* Nlink;
}STACK;

STACK *Push(STACK **Head,int *N_ele)
{
//create node
	STACK *New=(STACK *)malloc(sizeof(STACK));
	New->data=*N_ele;
	New->Nlink=NULL;
	if(*Head==NULL)
	{
		return *Head=New;
	}
	else
	{
		STACK *Temp=*Head;
		New->Nlink=Temp;
		return *Head=New;
	}

	
}

//POP operation
STACK *Pop(STACK **Head)
{
	if(*Head==NULL)
		printf("Empty stack\n");
	else
	{
		STACK *Temp = *Head;
		*Head=Temp->Nlink;
		free(Temp);
	}

	return *Head;
}

//display function

void Print_LL(STACK **Head)
{
	STACK *Temp=*Head;
	while(Temp!=NULL)
	{
		printf("data:%d--->",Temp->data);
		Temp=Temp->Nlink;
	}
}



int main()
{
STACK *head=NULL;
		
	int Count_nodes=1,N_nodes=4,N_ele;
	int ch;
	
while(1)
{
			
	printf("\nenter 1.Push\t2.POP\t3.Print\n");
	scanf("%d",&ch);
	fflush(stdout);


switch(ch)
{
case 1:
	
	printf("Enter the %d node element\n",Count_nodes);
	scanf("%d",&N_ele);
	head=Push(&head,&N_ele);//insert elements
	Count_nodes++;
	break;
case 2:
	Pop(&head);//Remove element
	Count_nodes--;
	break;
case 3:
	Print_LL(&head);
	break;

default:
	printf("choose correct case\n");

}
}
}
