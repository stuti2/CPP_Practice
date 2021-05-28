#include<iostream>
using namespace std;
int getBit(int n, int i)
{
    return ((n&(1<<i))!=0);
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n,xorsum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        xorsum^=a[i];
    }
    int setbit=0,pos=0,xorsum1=xorsum;
    while(setbit!=1)
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }
    int xorsum2=0;
    for(int i=0;i<n;i++)
    {
        if(getBit(a[i],pos-1))
        {
            xorsum2^=a[i];
        }
    }
    cout<<xorsum2<<" "<<(xorsum2^xorsum1)<<endl;
}