#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node * head;

void beginsert();
void search();
 int main()
{

int n,i;
printf("enter number of elements in list");
scanf("%d",&n);
for(i=0;i<n;i++)
{
beginsert();
}
search();
getch();
return (1);
}
void beginsert()
{
	struct node *ptr;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
{
	printf("\n overflow");
}
else
{
	printf("\n enter values \n");
	scanf("%d",&item);
	ptr->data=item;
	ptr->next=head;
	head=ptr;
	printf("\n node inserted \n");
}
}
void search()
{
	struct node* ptr;
	int item,i=0,flag;
ptr=head;
if(ptr==NULL)
{
	printf("\n empty linked list \n");
	
}
else
{
	printf("\n enter number you want tp search \n");
	scanf("%d",&item);
	while(ptr!=NULL)
{
	if(ptr->data==item)
	
{
	printf("item find at location %d",i+1);
	flag=0;
	break;
}
else
{
	flag=1;
}
i++;
ptr=ptr->next;
}
if(flag==1)
{
	printf("\n item not found \n");
}
}
}
