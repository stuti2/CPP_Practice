#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> v;
void permute(vector<string>& a,int start)
{
    if(start==a.size())
    {
        v.push_back(a);
        return;
    }
    for(int i=start;i<a.size();i++)
    {
        swap(a[i],a[start]);
        permute(a,start+1);
        swap(a[i],a[start]);        //backtrack
    }
    return;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    vector<string> s(n);
    for(auto &i:s)
        cin>>i;
    
    permute(s,0);
    for(auto i:v)
    {
        for(auto x:i)
            cout<<x;
        cout<<endl;
    }
        
}