//Inserting an element in the given position of an array
#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("the array is\n");
    for (int j = 0; j < 8; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    int size = 8;
    int element, index;
    printf("In which index do you want to insert\n");
    scanf("%d", &index);
    printf("Enter element to be inserted\n");
    scanf("%d", &element);
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    size = size + 1;
    printf("\nArray after insertion\n");
    display(arr, size);

    return 0;
}
