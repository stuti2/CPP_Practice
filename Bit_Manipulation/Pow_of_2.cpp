#include<iostream>
using namespace std;
bool powOf2(int n)
{
    return n&&!(n&(n-1));
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    cout<<powOf2(n)<<endl;
    return 0;
}