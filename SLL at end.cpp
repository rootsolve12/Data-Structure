#include <stdio.h>
#include <string.h>
struct node 
{
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

int printList()
{
   struct node *p = head;
   printf("\n[");
   
   while(p != NULL) {
      printf(" %d ",p->data);
      p = p->next;
   }
   printf("]");
}

int insertatbegin(int data){

   struct node *lk = (struct node*)malloc(sizeof (struct node));
   lk->data = data;

   lk->next = head;
   
   head = lk;
}
int insertatend(int data)
{
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   struct node *linkedlist = head;

   while(linkedlist->next != NULL)
      linkedlist = linkedlist->next;

   linkedlist->next = lk;
}
int main()
{
   int k=0;
   insertatbegin(12);
   insertatend(22);
   insertatend(30);
   insertatend(44);
   insertatend(50);
   printf("Linked List: ");
   
   printList();
}
