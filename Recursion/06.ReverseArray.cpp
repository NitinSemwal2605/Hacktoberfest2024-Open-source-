#include <bits/stdc++.h>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int start, int end)
{
    // Base case: if start is greater than or equal to end, return
    if(start >= end)
    {
        return;
    }
    
    // Swap the elements at start and end indices
    swap(arr[start], arr[end]);
    
    // Recursive call to reverse the remaining elements
    reverseArray(arr, start + 1, end - 1);
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
    reverseArray(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}