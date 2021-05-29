#include<bits/stdc++.h>
using namespace std;
int findComplement(int num) 
{
    int x=log2(num)+1;
    for(int i=0;i<x;i++)
        num=num^(1<<i);
    return num;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int N;
    cin>>N;
    cout<<findComplement(N); 
}