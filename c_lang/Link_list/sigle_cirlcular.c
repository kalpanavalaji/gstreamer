#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* Nlink;
	struct node* Plink;
}NODE;
NODE *head=NULL;
		

NODE *New1;

NODE *insertfront(NODE **Head,int *N_ele)
{
//create node
	NODE *New=(NODE *)malloc(sizeof(NODE));
	New->data=*N_ele;
	New->Nlink=NULL;
	if(*Head==NULL)
	{
		New1=New;
		//return *Head=New;
	}
	else
	{
		NODE *Temp=*Head;
		New->Nlink=Temp;
		//return *Head=New;
	}

		return *Head=New;
	
}


//display function

void Print_LL_backward(NODE *Head)
{
	NODE *temp=Head;
	if(temp==NULL)
		return;
	Print_LL_backward(temp->Nlink);
	printf("data:%d\tOwn address:%p\tnext address ::%p\tprev address::%p\n",temp->data,temp,temp->Nlink,temp->Plink);
	
}

void Print_LL_forward(NODE *Head)
{
	NODE *temp=Head;
	while(temp->Nlink!=Head)
	{
		printf("data:%d\tOwn address:%p\tnext address ::%p\tprev address::%p\n",temp->data,temp,temp->Nlink,temp->Plink);
		temp=temp->Nlink;
		if(temp==NULL)
			break;
		
	}
	
}

//convert sigle link to circular linked list

void *convert_sigle_cir_double(NODE *Head)
{
	NODE *temp=Head,*Prev=NULL;
		head->Plink=NULL;
	while(temp->Nlink!=NULL)
	{
		//printf("%d\t",temp->data);
	
		Prev=temp;
		temp=temp->Nlink;
		
		if(temp!=NULL)
		{
			temp->Plink=Prev;
		}
		
	}

		head->Plink=New1;
		
	
}



int main()
{

	int Count_nodes=1,N_nodes=4,N_ele;
	int ch;

while(1)
{

	printf("\nenter 1.insert\t2.print forward\t3.print backward\t4.convert sigle linked list to circular double linked list\n");
	scanf("%d",&ch);
	fflush(stdout);


switch(ch)
{
case 1:
	printf("Enter number of nodes you want\n");
	scanf("%d",&N_nodes);
	while(N_nodes>=Count_nodes)
	{

		printf("Enter the %d node element\n",Count_nodes++);
		scanf("%d",&N_ele);
		//fflush(stdout);

		head=insertfront(&head,&N_ele);//insert elements
		//++Count_nodes;
	}
	break;

	//printing farword elements
case 2:
	printf("\nPrinting forward nodes data\n\n");
	Print_LL_forward(head);
	break;
case 3:
	printf("\nPrinting backward nodes data\n\n");
	Print_LL_backward(head);
	break;
case 4:
	printf("\nconvert sigle linked list to circular double linked list\n");
	convert_sigle_cir_double(head);
	break;

default:
	printf("choose correct case\n");

}

}
return 0;

}







