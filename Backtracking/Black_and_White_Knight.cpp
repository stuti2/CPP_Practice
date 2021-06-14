#include<bits/stdc++.h>
using namespace std;

bool isSafe(int N,int M,int i,int j)
{
    if(i<N && i>=0 && j<M && j>=0)
        return true;
    return false;
}

long long solve(int N, int M)
{
    long long count=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            count+=N*M-1;
            if(isSafe(N,M,i+1,j+2))
                count--;
            if(isSafe(N,M,i+1,j-2))
                count--;
            if(isSafe(N,M,i-2,j+1))
                count--;
            if(isSafe(N,M,i-2,j-1))
                count--;
            if(isSafe(N,M,i+2,j-1))
                count--;
            if(isSafe(N,M,i+2,j+1))
                count--;
            if(isSafe(N,M,i-1,j+2))
                count--;
            if(isSafe(N,M,i-1,j-2))
                count--;
        }
    }
    return count%(1000000007);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m)<<endl;
    return 0;
}