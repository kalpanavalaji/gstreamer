#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *Nlink;
}NODE;
NODE *Head=NULL;
void print_alternate_s_e__e_s(NODE *temp)
{
	if(temp==NULL)
		return;
	printf("%d\t",temp->data);
	if(temp->Nlink!=NULL)
		print_alternate_s_e__e_s(temp->Nlink->Nlink);
	
	printf("%d\t",temp->data);
 
}
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
/*
void Print_LL(NODE *Temp)
{
	while(Temp!=NULL)
	{
		printf("temp address::%p\tdata:%d\n",Temp,Temp->data);
		Temp=Temp->Nlink;
	}
}*/
void Print_LL(NODE *Temp)
{
	if(Temp!=NULL)
	{
		printf("temp address::%p\tdata:%d\n",Temp,Temp->data);
		Temp=Temp->Nlink;
		Print_LL(Temp);
	}
}
//last node address
NODE *retur_last_add(NODE *temp)
{
	if(temp->Nlink!=NULL)
		retur_last_add(temp->Nlink);
	else
		return temp;
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
}/*
void insert_element_before_last_node(NODE *temp,int ele)
{
	NODE *prev=NULL,*New=NULL;
	if(temp->Nlink==NULL)
	{
		prev=temp;
		temp=NULL;
	}
	else
	{
		while(temp->Nlink!=NULL)
		{
			prev=temp;
			temp=temp->Nlink;
		}
	}
	New=create_node(New,ele);//new ele address
	prev->Nlink=New;
	New->Nlink=temp;
}
*/
void insert_element_before_last_node(NODE *temp,int ele)
{
        NODE *prev=NULL,*New=NULL;
        if(temp->Nlink==NULL)
        {
                prev=temp;
                temp=NULL;
        }
        else
        {
                while(temp->Nlink!=NULL)
                {
                        prev=temp;
                        temp=temp->Nlink;
                }
        }
        New=create_node(New,ele);//new ele address
        prev->Nlink=New;
        New->Nlink=temp;
}
		
//main function
int main()
{

	int N_nodes,N_ele,Count_nodes=1;
	int ch;
	NODE *las_addr;
	
while(1)
{

	printf("\nenter 1.Insert\t2.Print\t3.Delete\t4.last node address\t5.insert ele last but one node\t6.print alternate start to end and end to start\n");
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
case 3:
	deleteend(Head);
	break;
case 4:
	las_addr=retur_last_add(Head);
	printf("last node address::%p\n",las_addr);
	break;
case 5:
	printf("enter insert element last but one node\n");
	scanf("%d",&N_ele);
	Count_nodes++;
	insert_element_before_last_node(Head,N_ele);
	break;
case 6:
	if(Head==NULL)
		printf("NO Elements in list\n");
	print_alternate_s_e__e_s(Head);
	break;
default:
	printf("choose correct option\n");
}
}
return 0;
}
