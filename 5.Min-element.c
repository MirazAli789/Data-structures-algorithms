#include <stdio.h>
int main()
{
    int n, i, least;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    least = arr[0];
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
        if (least > arr[i])
        {
            least = arr[i];
        }
    }
    printf("The least number of the array is %d\n", least);

    return 0;
}
