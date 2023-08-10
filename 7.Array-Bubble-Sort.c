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
    int size, i, j;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array\n");
    take_array(arr, size);
    printf("The array is \n");
    display(arr, size);

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size - 1); j++)
        {
            if (arr[j] > arr[j+1])
                
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }   
    printf("AFTER SORTING\n");

    display(arr, size);

    return 0;
}
