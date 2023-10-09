// Find the second largest element in an array of unique elements of size n. Where n>3.
#include <bits/stdc++.h>
using namespace std;
int second_largest(int arr[], int n)
{
    int max1 = INT_MIN, max2;
    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i];
        }
    }
    max2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (max2 < arr[i])
        {
            if(arr[i]!=max1){
                max2 = arr[i];
            }
        }
    }
    return max2;
}
int main()
{
    int arr[6] = {12, 7, 3, 83, 6, 23};
    int max2 = second_largest(arr, 6);
    cout << "The second largest element in the array is " << max2;
    return 0;
}
