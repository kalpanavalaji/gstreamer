#include<stdio.h>
#include<stdlib.h>
typedef struct queue
  {
	int data;
	struct queue *Nlink;
  }NODE;

//Push operation		
NODE *Push(NODE **Head,int *N_ele)
{

	NODE *New=(NODE *)malloc(sizeof(NODE));
	New->data=*N_ele;
	New->Nlink=NULL;
	if(*Head==NULL)//segmentation fault if dont declare Head variable as pointer.
	{
		return *Head=New;
	}
	else
	{
		NODE *Temp = *Head,*Prev=Temp;
		while(Temp->Nlink!=NULL)
		{
			Prev=Temp;
			Temp=Temp->Nlink;
		}
		Temp->Nlink=New;
	}
}

//POP operation
NODE *Pop(NODE **Head)
{
	if(*Head==NULL)
		printf("Empty Queue\n");
	else
	{
		NODE *Temp = *Head;
		*Head=Temp->Nlink;
		free(Temp);
	}

	return *Head;
}



void Print_LL(NODE **Head)
{
	NODE *Temp=*Head;
	while(Temp!=NULL)
	{
		printf("data:%d--->",Temp->data);
		Temp=Temp->Nlink;
	}
}

//main function
int main()
{
NODE *head=NULL;
		
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
	Push(&head,&N_ele);//insert elements
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
return 0;
}
