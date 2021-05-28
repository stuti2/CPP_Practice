#include<bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t);
char findTheDifference(string s, string t) 
{
    char random=t[s.size()];
    for(int i=0;i<s.length();i++)
        random^=s[i]^t[i];
    return random;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    string s,t;
    cin>>s>>t;
    cout<<findTheDifference(s,t); 
}
