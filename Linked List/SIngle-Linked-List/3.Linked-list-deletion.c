#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void link_traverse(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("[%d]->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
struct node *deletion_beginning(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *deletion_middle(int index, struct node *head)
{
    struct node *ptr = head;
    for (int i = 1; i < (index - 1); i++)
    {
        ptr = ptr->next;
    }
    struct node *p1 = ptr->next;
    ptr->next = p1->next;
    free(p1);
    return head;
}
struct node *deletion_end(struct node *head)
{
    struct node *p1 = head;
    struct node *p2 = p1->next;
    while (p2->next != NULL)
    {
        p1 = p2;
        p2 = p2->next;
    }
    
    p1->next = p2->next;
    free(p2);
    return head;
}

int main()
{
    int n, data, choice, i = 0, index;
    while (i < 100)
    {
        struct node *head = NULL, *tail = NULL;
        printf("Enter the number of nodes of the linked list \n");
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
        printf("The linked list is............\n");
        struct node *p1 = head;
        while (p1 != NULL)
        {
            printf("[%d]->", p1->data);
            p1 = p1->next;
        }
        printf("NULL\n");
        printf(" Enter 1 for deletion at beginning\n Enter 2 for deletion at any position\n Enter 3 for deletion at the end \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Linked list after deleting the first node \n");
            link_traverse(deletion_beginning(head));
            break;
        case 2:
            printf("Enter the position of the linked list from where you want to delete an element\n");
            scanf("%d", &index);
            printf("The linked list after deleting at %d position\n", index);
            link_traverse(deletion_middle(index, head));
            break;
        case 3:
            printf("Linked list after deleting the last node \n");
            link_traverse(deletion_end(head));
            break;
        default:
            break;
        }
        int decide;
        printf("Enter 1 if you want to continue,enter 0 if you want exit\n");
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
        return 0;
    }
}

