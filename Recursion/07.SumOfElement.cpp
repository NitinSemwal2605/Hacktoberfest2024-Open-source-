#include<bits/stdc++.h>
using namespace std;

int sumOfElement(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    return arr[n-1] + sumOfElement(arr,n-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sumOfElement(arr,n);
    return 0;
}