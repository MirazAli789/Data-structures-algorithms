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
    int n, data, pos;
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
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;
    printf("Enter the position from where you want to delete a node\n");
    scanf("%d", &pos);
    for (int i = 1; i < pos-1; i++)
    {
        ptr1 = ptr2;
        ptr2 = ptr2->next;
    }
    struct node *ptr3 = ptr2->next;
    ptr1->next = ptr3;
    ptr3->prev = ptr1;
    free(ptr2);
    printf("After deleting the node %d of the doubly linked list\n", pos);
    printf("The doubly linked list is\n");
    struct node *ptr4 = head;
    printf("NULL");
    while (ptr4 != NULL)
    {
        printf("<-[%d]->", ptr4->data);
        ptr4 = ptr4->next;
    }
    printf("NULL\n");
    return 0;
}
