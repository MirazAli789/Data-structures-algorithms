# include <stdio.h>
int binary(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int size = 10, element = 28;
    int arr[10] = {20, 21, 22, 23, 24, 25, 27, 28, 29, 30};
    int search_index = binary(arr, size, element);
    printf("the element %d was found at index %d\n", element, search_index);

    return 0;
}
