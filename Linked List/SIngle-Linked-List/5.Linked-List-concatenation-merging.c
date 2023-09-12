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
struct node *concat(struct node *head1, struct node *head2)
{
    struct node *ptr = head1;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = head2;
    return head1;
}
struct node *merge(struct node *head1, struct node *head2)
{
    struct node *p1 = head1;
    struct node *p2 = head2;
    struct node *dummy = (struct node *)malloc(sizeof(struct node));
    dummy->data = -1;
    struct node *p3 = dummy;
    while (p1 != NULL && p2 != NULL)
    {
        if ((p1->data) < (p2->data))
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummy->next;
}
int main()
{
    int n1, n2, data1, data2, i = 0, choice;
    struct node *head1 = NULL, *head2 = NULL, *tail1 = NULL, *tail2 = NULL;
    while (i < 100)
    {
        printf("Enter the number of nodes of the first linked list\n");
        scanf("%d", &n1);
        for (int i = 0; i < n1; i++)
        {
            printf("Enter data %d: ", i + 1);
            scanf("%d", &data1);
            struct node *new1 = (struct node *)malloc(sizeof(struct node));
            new1->data = data1;
            new1->next = NULL;
            if (head1 == NULL)
            {
                head1 = new1;
                tail1 = new1;
            }
            else
            {
                tail1->next = new1;
                tail1 = new1;
            }
        }
        printf("The first Linked list is\n");
        struct node *ptr1 = head1;
        while (ptr1 != NULL)
        {
            printf("[%d]->", ptr1->data);
            ptr1 = ptr1->next;
        }
        printf("NULL\n");

        printf("Enter the number of nodes of the second linked list\n");

        scanf("%d", &n2);
        for (int i = 0; i < n2; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &data2);
            struct node *new2 = (struct node *)malloc(sizeof(struct node));
            new2->data = data2;
            new2->next = NULL;
            if (head2 == NULL)
            {
                head2 = new2;
                tail2 = new2;
            }
            else
            {
                tail2->next = new2;
                tail2 = new2;
            }
        }
        printf("The second linked list is\n");
        struct node *p2 = head2;
        while (p2 != NULL)
        {
            printf("[%d]->", p2->data);
            p2 = p2->next;
        }
        printf("NULL\n");

        printf("\n Enter 1 for concatenation \n Enter 2 for merging\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("The two linked list after merging\n");
            link_traverse(concat(head1, head2));
            break;
        case 2:
            printf("The two linked list after merging\n");
            link_traverse(merge(head1, head2));
            break;
        default:
            break;
        }
        int decide;
        printf("Press 1 if you want to continue else press any other number\n");
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

