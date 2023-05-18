#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	};
	struct node *front;
	struct node * rear;
	void insert();
	void del();
	void display();
	int main()
	{
		int choice;
		while(choice!=4)
	{

	printf("\n ******************************Main Menu******************************************** \n");
	printf("\n==================================================================================== \n");
	printf("\n 1 insert an element \n 2 delete an element \n3 display the queue \n 4 Exit \n");
printf("\n enter your choice");	
scanf("%d",&choice);
switch(choice)
{
	case 1:
		insert();
		break;
case 2:
		del();
		break;
		case 3:
		display();
		break;
		case 4:
		exit(0);
		break;
		default:
		printf("\n enter valid choice \n");
		
}
}
return (0);
}
void insert()
{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\n OVERFLOW \n");
		return;
		
	}
	else
	{
	printf("\n enter a value \n");
	scanf("%d",&item);
	ptr->data=item;
	if(front==NULL)
	{
		front=ptr;
		rear=ptr;
		front->next=NULL;
		rear->next=NULL;
	}
	}
}
void del()
{
	struct node* ptr;
	if(front==NULL)
	{
		printf("\n underflow \n");
		return;
	}
	else
	{
		ptr=front;
		front=front->next;
		free(ptr);
	}
}
void display()
{
	struct node *ptr;
	ptr=front;
	if(front==NULL)
	{
		printf("\n empty queue \n");
		
	}
	else
	{
		printf("\n printing values.. \n");
		while(ptr!=NULL)
		{
			printf("\n %d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
