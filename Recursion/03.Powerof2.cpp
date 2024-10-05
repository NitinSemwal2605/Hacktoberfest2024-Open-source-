#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n)
{
    if(n==0)
    {
        return false;
    }
    return (n & (n-1))==0;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPowerOf2(n);
    return 0;
}