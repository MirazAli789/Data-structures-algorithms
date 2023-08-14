#include <stdio.h>
void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int size = 6, i;
    int arr[6] = {1, 23, 4, 29, 98, 10};
    printf("before reversing\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    reverse(arr, 0, size - 1);
    printf("after reversing\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
