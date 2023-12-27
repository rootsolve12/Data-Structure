#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node 
{
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void printList()
{
   struct node *p = head;
   printf("\n[");
   
   while(p != NULL) 
   {
      printf(" %d ",p->data);
      p = p->next;
   }
   printf("]");
}

void insertatbegin(int data)
{
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;

   lk->next = head;

   head = lk;
}
void insertafternode(struct node *list, int data)
{
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   lk->next = list->next;
   list->next = lk;
}
int main()
{
   int k=0;
   insertatbegin(12);
   insertatbegin(22);
   insertafternode(head->next, 30);
   printf("Linked List: ");
   
   
   
   
   

   printList();
}
