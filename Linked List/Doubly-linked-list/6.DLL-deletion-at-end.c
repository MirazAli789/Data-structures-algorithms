#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
int main()
{
    int n, data;
    struct node *head = NULL, *tail = NULL;
    printf("Enter the number of Nodes of the doubly linked list\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter data %d: ", i + 1);
        scanf("%d", &data);

        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->prev = NULL;
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail->prev = NULL;
            tail->next = new;
            tail = new;
        }
    }
    printf("The doubly linked list is \n");
    struct node *ptr = head;
    printf("NULL");
    while (ptr != NULL)
    {
        printf("<-[%d]->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    struct node *ptr2 = head;
    struct node *ptr3 = ptr2->next;
    while (ptr3->next !=NULL)
    {
        ptr2 = ptr3;
        ptr3 = ptr3->next;   //here ptr2 is the trailing pointer.
    }
    ptr2->next = NULL;
    free(ptr3);
    printf("\n");
    printf("After deleting the last node of the doubly linked list\n");
    printf("The doubly linked list is\n");
    struct node *ptr4 = head;
    printf("NULL");
    while (ptr4!=NULL)
    {
        printf("<-[%d]->",ptr4->data);
        ptr4 = ptr4->next;
    }
    printf("NULL\n");
    return 0;
}
