#include<bits/stdc++.h>
using namespace std;
int power(int n,int p)
{
    if(p==0)
        return 1;
    return n*power(n,p-1);
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
}
