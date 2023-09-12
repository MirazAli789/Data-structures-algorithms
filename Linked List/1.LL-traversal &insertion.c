#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insert_beginning(int element, struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = element;

    new->next = head;
    head = new;

    return new;
}
struct node *insert_middle(int element, int index, struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    for (int i = 1; i < index - 1; i++)
    {
        ptr = ptr->next;
    }
    new->data = element;
    new->next = ptr->next;
    ptr->next = new;
    return head;
}
struct node *insert_last(int element, struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    new->data = element;
    new->next = NULL;
    ptr->next = new;
    return head;
}

int main()
{

    int n, data, choice, i = 0, element, element2, index1, element3;
    while (i < 1000)
    {
        struct node *head = NULL, *tail = NULL;
        printf("Enter the number elements of the linked list\n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("Enter element no %d: ", i + 1);
            scanf("%d", &data);
            struct node *new = (struct node            *)malloc(sizeof(struct node));
            // creates a new node every time the for loop runs
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
        printf("\n");
        printf("The linked list is\n");
        struct node *ptr = head;

        while (ptr != NULL)
        {
            printf("[%d] ->", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
        printf("\nEnter 1 for inserting at beginning\nEnter 2 for inserting at any position\nEnter 3 for inserting at end position\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* code */
            printf("Enter the element to be inserted at the beginning\n");
            scanf("%d", &element);
            struct node *ptr1 = insert_beginning(element, head);
            printf("After inserting the element %d at the beginning the linked list is\n", element);
            while (ptr1 != NULL)
            {
                printf("[%d] ->", ptr1->data);
                ptr1 = ptr1->next;
            }
            printf("NULL\n");
            break;
        case 2:

            printf("Enter the element to be inserted \n");
            scanf("%d", &element2);
            printf("Enter the position where the element %d is to be inserted\n", element2);
            scanf("%d", &index1);
            struct node *ptr2 = insert_middle(element2, index1, head);
            while (ptr2 != NULL)
            {
                printf("[%d] ->", ptr2->data);
                ptr2 = ptr2->next;
            }
            printf("NULL\n");
            break;
        case 3:

            printf("Enter the element to be inserted at the end\n");
            scanf("%d", &element3);
            struct node *ptr3 = insert_last(element3, head);
            while (ptr3 != NULL)
            {
                printf("[%d] ->", ptr3->data);
                ptr3 = ptr3->next;
            }
            printf("NULL\n");

            break;
        default:
            break;
        }
        int decide;
        printf("press 1 if you want to continue, else press any other number to exit\n");
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


