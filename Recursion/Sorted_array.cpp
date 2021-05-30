#include<bits/stdc++.h>
using namespace std;
int sorted(int a[],int n)
{
    if(n==1)
        return 1;
    bool remArray=sorted(a+1,n-1);
    return (a[0]<a[1] && remArray);
}
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
    cout<<sorted(a,n);
}