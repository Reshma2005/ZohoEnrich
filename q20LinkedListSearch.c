/*Search a number in a given linked list and print its index from head node.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* createNode()
{
	struct node* new;
	new = (struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&new->data);
	new->next=NULL; 
	return new;
}

void append(struct node **h)
{
	struct node *new,*temp;
	new = createNode();
	if(*h == NULL)
	{
		*h = new;
		return;
	}
	temp = *h;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next =new;
}

void search(struct node *h)
{
	struct node *new;
	int key,count =0;	
	if(h == NULL)
	{
		printf("List Empty\n");
		return;
	}
	printf("Enter the element to be searched:");
	scanf("%d",&key);
	new = h;
	while(1)
	{
		if(new == NULL)
		{
			printf("\nThe search element is not found in the List\n");
			return;
			
		}
		if(new->data == key)
		{
			printf("\n%d is present at position %d from the head of the node\n",key,count);
			return;
		}
		new = new->next;
		count++;
	}
	
}

int main()
{
	struct node *head = NULL;
	int ch;
   while(1)    {
      printf("\n1.Append");
      printf("\n2.Search for a node");
      printf("\n3.Exit program");
      printf("\n\n\tEnter your choice : ");
      scanf("%d",&ch);
      switch(ch)     {
          case 1:append(&head);break;
          case 2:search(head);break;
          case 3:exit(0);break;
          default : 
           printf( "Wrong Choice, Enter correct one : ");
      }
   }	
	
}
