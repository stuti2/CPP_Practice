#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int xorsum=0;
    for(int i=0;i<n;i++)
        xorsum^=a[i];
    cout<<xorsum<<endl;
}