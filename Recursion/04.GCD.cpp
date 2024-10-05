#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}


18 , 48
48 , 18
18 , 12 
12 , 6
6 , 0
0 , 6

return 6
