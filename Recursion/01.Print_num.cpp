#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==0)
    {
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)

// Now n to 1 

// void print (int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     cout<<n<<" ";
//     print(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }