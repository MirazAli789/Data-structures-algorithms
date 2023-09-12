#include <stdio.h>
int main()
{
    int n, i, max;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    max = arr[0];
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("the maximum number of this array is %d\n", max);

    return 0;
}
