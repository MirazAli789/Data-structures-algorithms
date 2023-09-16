#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int searchnode(int element, struct node *head)
{
    int position = 1;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == element)
        {
            return position;
        }
        ptr = ptr->next;
        position++;
    }
    return -1;
}
int main()
{
    int n, data, element;
    struct node *head = NULL, *tail = NULL;
    printf("Enter the number of nodes of the linked list\n");
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
        printf("[%d]->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

    printf("Enter the element you want to search for in the linked list\n");
    scanf("%d", &element);

    int position = searchnode(element, head);
    if (position == -1)
    {
        printf("Element not found !!!\n");
    }
    else
    {
        printf("Element %d was found at %d position \n", element, position);
    }
    return 0;
}
