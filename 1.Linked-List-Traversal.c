#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    
    struct node *next;
};

int main()
{
    struct node *head, *second, *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    printf("Enter three integers for creating a linked list\n");
    scanf("%d", &head->data);
    scanf("%d", &second->data);
    scanf("%d", &third->data);
    head->next = second;
    second->next = third;
    third->next = NULL;
    printf("Your linked list is\n");
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
