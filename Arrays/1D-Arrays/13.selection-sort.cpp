#include <bits/stdc++.h>
using namespace std;
void select_sort(int arr[], int n)
{
    // if the size of the array is n, then the no. of rounds = n-1
    for (int i = 0; i < (n - 1); i++)
    {
        int index = i; // it stores the index of the min element
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {6, 8, 2, 16, 1, 4};
    display(arr, 6);
    select_sort(arr, 6);
    display(arr, 6);
    return 0;
}
