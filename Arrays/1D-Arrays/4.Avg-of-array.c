
#include <stdio.h>
float array_average(int arr[], int n)
{
    int sum = 0;
    float avg;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = (sum / n);
    return avg;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    float avg = array_average(arr, 5);
    printf("The average of the array elements is %0.3f", avg);
    return 0;
}
