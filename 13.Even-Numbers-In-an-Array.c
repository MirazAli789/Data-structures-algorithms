#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("The number of even number present in this array is %d", count);

    return 0;
}
