#include<bits/stdc++.h>
using namespace std;
string toHex(int num) {
    if(num==0)
        return "0";
    string s;
    string hex="0123456789abcdef";
    unsigned int n=num;
    while(n)
    {
        s+=hex[n%16];
        n>>=4;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int N;
    cin>>N;
    cout<<toHex(N); 
}