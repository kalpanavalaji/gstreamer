#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *Nlink;
}NODE;
NODE *Head1=NULL;
NODE *Head2=NULL;
NODE  *alternate_link_nodes(NODE *head1,NODE *head2)
{
	NODE *temp1=head1,*temp2=head2;
	NODE *next1=NULL,*next2=NULL;
	while(temp1&&temp2)
	{
		next1=temp1->Nlink;
		next2=temp2->Nlink;
		
		temp1->Nlink=temp2;
		//temp2->Nlink=temp1;
		temp1=next1;
		temp2=next2;
	}

	
		
return head1;	
 
}
NODE *create_node(NODE *New,int N_ele)
{
	New=(NODE *)malloc(sizeof(NODE));
        New->data=N_ele;
        New->Nlink=NULL;
	return New;

}
NODE *insertend(NODE *Temp,int N_ele)
{
	NODE *Head=Temp;
	NODE *New=create_node(Temp,N_ele);
	if(Temp==NULL)
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
return Head;
}
//display function

void Print_LL(NODE *Temp)
{
	while(Temp!=NULL)
	{
		printf("temp address::%p\tdata:%d\n",Temp,Temp->data);
		Temp=Temp->Nlink;
	}
}


//delete end

void deleteend(NODE *Temp)
{
	if(Temp==NULL)
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
	int N_nodes1,N_ele1,Count_nodes1=1;
	int ch;
	NODE *Head;
while(1)
{

	printf("\nenter 1.Insert 1 LL\t2 LL\t6.Print\t3.Delete\t4.print alternate start to end and end to start\t5.free LL\n");
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

		Head1=insertend(Head1,N_ele);//insert elements
	}
	break;

	//printing elements
case 2:
        printf("\nEnter number of nodes you want\n");
        scanf("%d",&N_nodes1);
        while(N_nodes1--)
        {

                printf("\nEnter the %d node element\n",Count_nodes1++);
                scanf("%d",&N_ele1);

         Head2=insertend(Head2,N_ele1);//insert elements
        }
        break;

case 6:
	printf(":::1 LL ::::\n");
	Print_LL(Head1);
	printf(":::2 LL ::::\n");
	Print_LL(Head2);
	break;
case 3:
	deleteend(Head1);
	deleteend(Head2);
	break;
case 4:
	if(Head1==NULL&&Head2==NULL)
		printf("NO Elements in list\n");
	else
		Head=alternate_link_nodes(Head1,Head2);
	Print_LL(Head);
	break;
case 5:
	printf("free the linked list\n");
	free(Head1);
	free(Head2);
default:
	printf("choose correct option\n");
}
}
return 0;
}
