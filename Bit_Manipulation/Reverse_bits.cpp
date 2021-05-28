#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    unsigned int rev=0;
    while(n)
    {
        rev<<=1;
        rev|=n&1;
        n>>=1;
    }
    cout<<rev<<endl;
}