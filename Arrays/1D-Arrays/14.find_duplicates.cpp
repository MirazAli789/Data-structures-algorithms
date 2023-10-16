//find duplicates in an array
//int arr[] = {1,2,3,3,4};
// return 3 (because 3 is repeating)

#include<bits/stdc++.h>
using namespace std;
int dupli(vector<int> &arr){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int sum1 = n*(n+1)/2;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 +arr[i];
    }
    int t = sum1-sum2;
    int ans = n-t;
    return ans;

}
int main()
{
    int arr[5] = {1,2,2,3,4};
    vector <int> v;
    v.assign(arr,arr+5);
    cout<<dupli(v);
    
    
    return 0;
}
