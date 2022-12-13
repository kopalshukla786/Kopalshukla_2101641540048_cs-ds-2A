#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
}*p;

void insertAtEnd()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

	// Enter the number
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);

	// Changes links
	temp->link = 0;
	temp->data = data;
	head = p;
	while (head->link != NULL) {
		head = head->link;
	}
	head->link = temp;
}
void print()
{
	struct node* temp;

	// List is empty
	if (p == NULL)
		printf("\nList is empty\n");

	// Else print the LL
	else {
		temp = p;
		while (temp != NULL) {
			printf("Data = %d\n", temp->data);
			temp = temp->link;
		}
	}
}
void main(){
 insertAtEnd();
 insertAtEnd();
 insertAtEnd();
 insertAtEnd();
 print();
}
