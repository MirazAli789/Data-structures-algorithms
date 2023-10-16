// we have to print the nth fibonacci number;

#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    int arr[100];
    arr[0] = 0, arr[1] = 1; //as the first term = 0 and second term = 1 
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n - 1];
}
int main()
{
    cout << fibonacci(5) << endl;

    return 0;
}
