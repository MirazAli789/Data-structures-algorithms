// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
#include <bits/stdc++.h>
using namespace std;
int missing_no(int arr[], int n)
{
    int sum = 0;
    int nsum = n * (n + 1) / 2; // finding the sum of n numbers(given).
    for (int i = 0; i < (n - 1); i++)
    {
        sum = sum + arr[i]; // finding the sum of array elements(size = n-1)
    }
    int result = (nsum - sum); // nsum > sum (always)
    return result;
}
int main()
{
    int n = 5;
    int arr[4] = {1, 2, 4, 5};
    int miss = missing_no(arr, n);
    cout << "The missing no = " << miss;
    return 0;
}
