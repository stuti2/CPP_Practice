#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,char source,char dest, char helper)
{
    if(n==0)
        return;
    towerOfHanoi(n-1,source,helper,dest);
    cout<<"Move block "<<n<<" from "<<source<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,source);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    towerOfHanoi(n,'A','C','B');
}