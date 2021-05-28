#include<bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n) 
{
    if(n<=0)
        return false;
    if(n&(n-1))
        return false;
    return !(n&(0xAAAAAAAA));    
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    cout<<isPowerOfFour(n);
}
