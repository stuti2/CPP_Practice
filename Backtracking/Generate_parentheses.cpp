#include<bits/stdc++.h>
using namespace std;
vector<string> Parentheses(int n);
void generate(int n,vector<string>& ans,int open,int close,string s)
{
    if(s.size()==2*n)
        ans.push_back(s);
    if(open<n)
    {
        generate(n,ans,open+1,close,s+'(');
    }
    if(close<open)
    {
        generate(n,ans,open,close+1,s+')');
    }
}
vector<string> Parentheses(int n)
{
    string s="";
    vector<string> ans;
    generate(n,ans,0,0,s);
    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    vector<string> a=Parentheses(n);
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl;
    return 0;
}