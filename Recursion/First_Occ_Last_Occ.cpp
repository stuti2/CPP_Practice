#include<bits/stdc++.h>
using namespace std;
int FirstOcc(int a[],int n,int i,int key)
{
    if(i==n)
        return -1;
    if(a[i]==key)
        return i;
    return FirstOcc(a,n,i+1,key);
}
int LastOcc(int a[],int n,int i,int key)
{
    if(i==n)
        return -1;
    int restarray=LastOcc(a,n,i+1,key);
    if(restarray!=-1)
        return restarray;
    if(a[i]==key)
        return i;
    return -1;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0;
    cout<<FirstOcc(a,n,i,m)<<" "<<LastOcc(a,n,i,m);
}