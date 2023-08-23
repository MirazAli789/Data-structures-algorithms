#include <stdio.h>
void takearray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n1, n2, n3;
    int index = 0;
    printf("Enter the size of the first array\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("enter the elements of the array\n");
    takearray(arr1, n1);
    printf("the array is\n");
    display(arr1, n1);
    printf("\n");
    printf("enter the size of the second array\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("enter the elements of the array\n");
    takearray(arr2, n2);
    printf("the array is\n");
    display(arr2, n2);
    printf("\n");
    printf("array after concatination\n");
    n3 = n1 + n2;
    int arr3[n3];
    for (int i = 0; i < n1; i++)
    {
        arr3[index] = arr1[i];
        index++;
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[index] = arr2[i];
        index++;
    }
    printf("\n");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
