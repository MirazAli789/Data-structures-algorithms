// circularly rotate an array by 1
//  input: {1,2,3,4};
//  output: {4,1,2,3};
#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int last = arr[n - 1]; // storing the last element of the array
    for (int i = (n - 2); i >= 0; i--) //traversing the array in the reverse direction
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = last;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    print(arr, 4);
    rotate(arr, 4);
    print(arr, 4);

    return 0;
}
