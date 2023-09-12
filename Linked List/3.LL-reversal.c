#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n, data;
    struct node *head = NULL, *tail = NULL;

    printf("Enter the number of nodes\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail->next = new;
            tail = new;
        }
    }
    printf("The linked list is\n");
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("[%d] ->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    struct node *q = head, *r = NULL, *s = NULL;
    while (q != NULL)
    {
        s = r;
        r = q;
        q = q->next;
        r->next = s;
    }
    head = r;
    printf("Linked list after reversal\n");
    struct node *ptr1 = head;
    while (ptr1 != NULL)
    {
        printf("[%d]->", ptr1->data);
        ptr1 = ptr1->next;
    }
    printf("NULL\n");
    return 0;
}
