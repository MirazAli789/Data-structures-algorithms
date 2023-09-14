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
    int n, data, element;
    struct node *head = NULL, *tail = NULL;
    printf("Enter the number of nodes of the doubly linked list\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
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
    printf("The doubly linked list is\n");
    struct node *ptr = head;
    printf("NULL");
    while (ptr != NULL)
    {
        printf("<-[%d]->", ptr->data);

        ptr = ptr->next;
    }
    printf("NULL\n");
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the node to be inserted at the beginning\n");
    scanf("%d", &element);
    newnode->data = element;
    newnode->next = head;
    head->prev = newnode;
    newnode->prev = NULL;
    head = newnode;

    printf("The linked list after inserting at the beginning\n");
    struct node *ptr1 = head;
    printf("NULL");
    while (ptr1 != NULL)
    {
        printf("<-[%d]->", ptr1->data);
        ptr1 = ptr1->next;
    }
    printf("NULL\n");
    return 0;
}
