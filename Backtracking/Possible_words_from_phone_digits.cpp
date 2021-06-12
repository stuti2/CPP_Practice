#include<bits/stdc++.h>
using namespace std;
void generate(int a[],int n,int index,vector<string>& ans)
{
    string s[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    static string curr;
    if(index==n)
    {
        ans.push_back(curr);
        return;
    }
    for(int i=0;i<s[a[index]].size();i++)
    {
        curr+=s[a[index]][i];
        generate(a,n,index+1,ans);
        curr.erase(curr.begin()+curr.size()-1);
    }
}
vector<string> words(int a[],int n)
{
    vector<string> ans;
    generate(a,n,0,ans);
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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<string> word=words(a,n);
    for(auto i:word)
        cout<<i<<" ";
    return 0;
}