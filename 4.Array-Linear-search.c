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
int linearSearch(int arr[], int size, int element)
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
int main()
{
    int size,element;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array\n");
    take_array(arr, size);
    printf("The array is \n");
    display(arr, size);
    printf("enter the element you want to search for\n");
    scanf("%d", &element);
    int searchIndex = linearSearch(arr, size, element);
    printf("the element %d was found at index %d\n", element, searchIndex);

    return 0;
}
