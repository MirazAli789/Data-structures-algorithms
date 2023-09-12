#include <stdio.h>
void traverse(int arr[], int size)
{
    printf("Your array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insert(int arr[], int size, int index, int element)
{

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    size = size + 1;
    printf("Array after insertion\n");
    traverse(arr, size);
}
void deletion(int arr[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size = size - 1;
    printf("Array after deletion\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int search(int arr[], int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
void sort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting\n");
    traverse(arr, size);
}
void reverse(int arr[], int size, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Array after reverse\n");
    traverse(arr, size);
}

int main()
{
    int size, element, index, choice, i = 0, decide;

    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    traverse(arr, size);
    printf("\n Enter 1 for traversal \n Enter 2 for insertion \n Enter 3 for deletion \n Enter 4 for search \n Enter 5 for sorting \n Enter 6 for reverse\n");
    scanf("%d", &choice);
    while (i < 1000)
    {

        switch (choice)
        {
        case 1:
            traverse(arr, size);
            break;
        case 2:
            printf("Enter the index where the element is to be inserted\n");
            scanf("%d", &index);
            printf("Enter the element to be inserted\n");
            scanf("%d", &element);
            insert(arr, size, index, element);
            break;
        case 3:
            printf("Enter the position from where you want to delete an element\n");
            scanf("%d", &index);
            deletion(arr, size, index);
            break;
        case 4:
            printf("Enter the element you want to search for\n");
            scanf("%d", &element);

            int searchid = search(arr, size, element);
            printf("%d element was found at index %d \n", element, searchid);
            break;
        case 5:
            sort(arr, size);
            break;
        case 6:
            reverse(arr, size, 0, (size - 1));
            break;
        default:
            break;
        }
        printf("\n\nPress 1 if you want to continue, or press any number to exit\n");
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
