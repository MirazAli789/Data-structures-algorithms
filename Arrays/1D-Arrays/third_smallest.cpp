//Find the third smallest element in an array of unique elements size n. Where n>3.
#include<bits/stdc++.h>
using namespace std;
int third_least(int arr[],int n){
    int min1 = arr[0], min2 = arr[0], min3 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min1>arr[i]){
            min1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(min2>arr[i]){
            if(arr[i]!=min1){
                min2 = arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(min3>arr[i]){
            if(arr[i]!=min1 && arr[i]!= min2){
                min3 = arr[i];
            }
        }
    }
    return min3;
    
}
int main()
{
    int arr[] = {14,67,2,9,23,4,1,3};
    cout<<"Third minimum element in the array is "<<third_least(arr,8);
    return 0;
}
