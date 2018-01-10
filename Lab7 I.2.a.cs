#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node * HeadOfList = NULL;
struct node * current = NULL;


void PrintTheList()
{
  struct node * ptr = HeadOfList;

printf("\nHeadOfList ->");

   while(ptr != NULL) 
   {
      printf(" %d ->", ptr->data);
ptr = ptr->next;
   }

   printf(" NULL\n");
}

void InsertLink(int data)
{
    struct node * link = (struct node*) malloc(sizeof(struct node));
    link->data = data;
    link->next = HeadOfList;
    HeadOfList = link;
}


int main()
{
    int n;
    int i;
    int v[100];

    printf("How many components has the list?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("The next value in the list is: ");
        scanf("%d", &v[i]);
        InsertLink(v[i]);
    }

    PrintTheList();

    return 0;
}