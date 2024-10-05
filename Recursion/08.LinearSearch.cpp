#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int index ,int key)
{
    if(index==n)
    {
        return false;
    }
    if(arr[index]==key)
    {
        return true;
    }
    return linearSearch(arr,n,index+1,key);
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
    int key;
    cin>>key;
    cout<<linearSearch(arr,n,0,key);
    return 0;
}
