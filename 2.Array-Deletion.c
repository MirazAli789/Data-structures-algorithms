/*deleting an element from an array*/

#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void take_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int size, index, i;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array\n");
    take_array(arr, size);
    printf("The array is \n");
    display(arr, size);
    printf("Enter the index from where you want to delete an elememt \n");
    scanf("%d", &index);
    for (i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size = size - 1;
    printf("The array is \n");
    display(arr, size);

    return 0;
}
