#include <stdio.h>
#include <stdlib.h>
  

struct node {
  int data;
  struct node *next;
} *head;
 
void initialize(){
    head = NULL;
}
 
void insert(int num) {
   
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    
    newNode->next = head;
    
    head = newNode;
    printf("Inserted Element : %d\n", num);
}
 
 
void insertAfter(struct node* prevNode, int num) { 
    if (prevNode == NULL) { 
       printf("Error : Invalid node pointer !!!\n");       
       return;  
    }  
          

    struct node* newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data  = num;

    newNode->next = prevNode->next;  
   
    prevNode->next = newNode;
}
 

void printLinkedList(struct node *nodePtr) {
    printf("\nLinked List\n");
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-->");
  }
}
  
int main() {
    initialize();
  
    insert(2);  
    insert(4); 
    insert(5); 
    insert(9);
    printLinkedList(head);
   
    insertAfter(head->next->next, 8);
    printf("\n\nAfter Insertion\n");
    printLinkedList(head);
    return 0;
}
