#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void DLL_traverse(struct node *head)
{
    printf("The Doubly linked list is\n");
    struct node *ptr = head;
    printf("NULL");
    while (ptr != NULL)
    {
        printf("<-[%d]->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
struct node *insert_at_beginnining(int element, struct node *head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->prev = NULL;
    newnode->next = head;
    head = newnode;
    return head;
}
struct node *insert_at_end(int element, struct node *head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = element;
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    newnode->next = NULL;
    newnode->prev = ptr;
    ptr->next = newnode;
    return head;
}
struct node *inser_at_any_pos(int pos, int element, struct node *head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = element;
    struct node *ptr = head;
    struct node *ptr1 = ptr->next;
    for (int i = 1; i < (pos - 1); i++)
    {
        ptr = ptr1;
        ptr1 = ptr1->next;
    }
    newnode->prev = ptr;
    newnode->next = ptr1;
    ptr1->prev = newnode;
    ptr->next = newnode;
    return head;
}
int main()
{
    int n, data, element, i = 0, choice, position;
    struct node *head = NULL, *tail = NULL;
    while (i < 100)
    {

        printf("Enter the number of nodes of the doubly linked list\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &data);
            struct node *new = (struct node *)malloc(sizeof(struct node));
            new->prev = NULL;
            new->next = NULL;
            new->data = data;
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
        DLL_traverse(head);
        printf("\n Enter 1 for inserting at the beginning\n Enter 2 for inserting at the end\n Enter 3 for inserting at any position\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to be inserted at the beginning\n");
            scanf("%d", &element);
            printf("After inserting at the beginning\n");
            DLL_traverse(insert_at_beginnining(element, head));
            break;
        case 2:
            printf("Enter element to be inserted at the end\n");
            scanf("%d", &element);
            printf("After inserting at the end\n");
            DLL_traverse(insert_at_end(element, head));
            break;
        case 3:
            printf("Enter the position at which the element is to be inserted\n");
            scanf("%d", &position);
            printf("Enter element to be inserted at position %d\n", position);
            scanf("%d", &element);
            printf("After inserting %d at position %d\n", element, position);
            DLL_traverse(inser_at_any_pos(position, element, head));
            break;
        default:
            break;
        }
        int decide;
        printf("Enter 1 if want to continue else enter any other number to exit\n");
        scanf("%d", &decide);
        if (decide == 1)
        {
            main();
        }
        else
        {
            break;
        }
        i++;
    }
    return 0;
}

