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
    printf("Enter the number elements of the linked list\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %d ", i + 1);
        scanf("%d", &data);
        struct node *new = (struct node *)malloc(sizeof(struct node));
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
        printf("[%d]-->", ptr->data);
        ptr = ptr->next;
    }
    printf("[NULL]\n");

    return 0;
}
