#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*address;
};
void Middle(struct node* head)
{
	struct node*s;
	int mid;
	int c=0;
	s=head;
	while(s!=NULL)
	{
		c++;
		s=s->address;
	}
	   mid=c/2;
	if(c&1==0)
	{
		mid-=1;
	}
	s=head;
	while(mid>0)
	{
		s=s->address;
		mid-=1;
	}
	printf("%d",s->data);
}
int main()
{
		
	struct node*head=(struct node*)malloc(sizeof (struct node));
	struct node*second=(struct node*)malloc(sizeof (struct node));
	struct node*third=(struct node*)malloc(sizeof (struct node));
	head->data=10;
	head->address=second;
	second->data=20;
	second->address=third;
	third->data=30;
	third->address=NULL;
	Middle(head);
	
}
