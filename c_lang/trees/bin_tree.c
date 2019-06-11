#include<stdio.h>
#include<stdlib.h>
 typedef struct node
  {
	int ele;
	struct node* left;
	struct node* right;
  }NODE;


//Insert elements		

NODE *insert(NODE *new, int data)
{
 if(!new)
  {
    new=(NODE*)malloc(sizeof(NODE));
    new->ele = data;
    new->left = NULL;
    new->right = NULL;
    return(new);
  }
  if(new->ele > data)
     new->left = insert(new->left,data);
  else
   {
     if(new->ele < data)
	new->right = insert(new->right,data);
   }
   return(new);
 }


//display function for preorder

NODE Print_preorder(NODE *root)
{
	
	if(root!=NULL)
	{
		
		printf("data:%d\n\n",root->ele);
		Print_preorder(root->left);
		Print_preorder(root->right);
	}
}

//display function for inorder

NODE Print_inorder(NODE *root)
{
	if(root!=NULL)
	{
		
		Print_inorder(root->left);
		printf("data:%d\n\n",root->ele);
		Print_inorder(root->right);
	}
}
//display function for postorder

NODE Print_postorder(NODE *root)
{
	
	if(root!=NULL)
	{
		
		Print_postorder(root->left);
		Print_postorder(root->right);
		printf("data:%d\n\n",root->ele);	
	}
}


//destroy tree
void destroy_tree(struct node *leaf)
{
  if( leaf != 0 )
  {
      destroy_tree(leaf->left);
      destroy_tree(leaf->right);
      free( leaf );
  }
}



int main()
{

	NODE *root=NULL;	
	int Count_nodes=1,N_nodes,N_ele;
	int ch;

while(1)
{

	printf("\nEnter 1.Insert\t 2.Print_Preorder\t 3.Print_Inorder\t 4.Print_Postorder\t 5.Destroy_tree\n");
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

			root=insert(root,N_ele);//insert elements
			Count_nodes++;
		}
		break;

	//printing elements
	case 2:
		if(root!=NULL)
		{
			printf("\n\n-------Preorder--------\n\n");
			Print_preorder(root);
		}
		else
			printf("No elements in a tree\n");
		break;

	case 3:
		if(root!=NULL)
		{
			printf("\n\n-------Inorder--------\n\n");
			Print_inorder(root);
		}
		else
			printf("No elements in a tree\n");
		break;
	case 4:
		if(root!=NULL)
		{
			printf("\n\n-------Postorder--------\n\n");
			Print_postorder(root);
		}
		else
			printf("No elements in a tree\n");
		break;
	case 5:
			destroy_tree(root);
			printf("Tree was destroyed\n");		
		break;
	default:
		printf("choose proper option\n");

  }

}
return 0;

}

