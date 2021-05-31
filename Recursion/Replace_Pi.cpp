#include<bits/stdc++.h>
using namespace std;
void ReplacePi(string s)
{
    if(!s.length())
        return;
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        ReplacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        ReplacePi(s.substr(1));
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    string str;
    cin>>str;
    ReplacePi(str);
    return 0;
}