#include<stdio.h>
#include<stdlib.h>
 typedef struct node
  {
	int data;
	struct node* Nlink;
  }NODE;
//Reverse the linked list
/*void ReverseLinked(NODE **Head)
{
	NODE *P_prev=NULL,*Prev=NULL;
	NODE *temp= *Head;

	while(temp!=NULL)
	{
		Prev=temp;
		temp=temp->Nlink;
		Prev->Nlink=P_prev;
		P_prev=Prev;
	}
	*Head=P_prev;
}*/

//Recurrsion reverse linked list
NODE *ReverseLinked(NODE **Head)
{
	static NODE *P_prev,*Prev=NULL;
		NODE *temp=*Head;
	if(temp!=NULL)
	{
		
		Prev=temp;
		printf("Prev::%p\n",Prev);
                temp=temp->Nlink;
		printf("temp::%p\n",temp);
                Prev->Nlink=P_prev;
                P_prev=Prev;
		printf("P_Prev::%p\n",P_prev);
		ReverseLinked(&temp);//recursion
	}
		*Head=P_prev;
		printf("HEad::%p\n",*Head);
	//	return *Head;
	

}	








NODE *insertfront(NODE **Head,int *N_ele)
{
//create node
	NODE *New=(NODE *)malloc(sizeof(NODE));
	New->data=*N_ele;
	New->Nlink=NULL;
	if(*Head==NULL)
	{
		return *Head=New;
	}
	else
	{
		NODE *Temp=*Head;
		New->Nlink=Temp;
		return *Head=New;
	}

	
}

//display function

void Print_LL(NODE **Head)
{
	NODE *Temp=*Head;
	while(Temp!=NULL)
	{
		printf("data:%d\tOwn address:%p\tnext address ::%p\n",Temp->data,Temp,Temp->Nlink);
		Temp=Temp->Nlink;
	}
}

 

 
int main()
{
NODE *head=NULL;
		
	int Count_nodes=1,N_nodes=4,N_ele;
	int ch;

while(1)
{

	printf("\nenter 1.insert\t2.print\t3.REvrese for linked list\n");
	scanf("%d",&ch);
	fflush(stdout);


switch(ch)
{
case 1:
	printf("Enter number of nodes you want\n");
	scanf("%d",&N_nodes);
	while(N_nodes>=Count_nodes)
	{

		printf("Enter the %d node element\n",Count_nodes);
		scanf("%d",&N_ele);
		//fflush(stdout);

		head=insertfront(&head,&N_ele);//insert elements
		Count_nodes++;
	}
	break;

	//printing elements
case 2:
	Print_LL(&head);
	break;
case 3:
	printf("head::add:%p\n",&head);
	printf("head::%p\n",head);
	ReverseLinked(&head);
	break;
default:
	printf("choose correct case\n");

}

}
return 0;

}







