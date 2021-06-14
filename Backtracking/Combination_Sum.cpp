#include<bits/stdc++.h>
using namespace std;

void findSum(vector<int>& a,vector<int> r,vector<vector<int>>& ans,int index,int sum)
{
    if(sum==0)
    {
        ans.push_back(r);
        return;
    }
    while(index<a.size() && sum-a[index]>=0)
    {
        r.push_back(a[index]);
        findSum(a,r,ans,index,sum-a[index]);
        index++;
        r.pop_back();           //backtrack
    }
}
vector<vector<int>> combinationSum(vector<int>& a,int b)
{
    sort(a.begin(),a.end());    
    a.erase(unique(a.begin(),a.end()),a.end());     //remove duplicates

    vector<int> r;
    vector<vector<int>> ans;

    findSum(a,r,ans,0,b);
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n,b;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cin>>b;

    vector<vector<int>> v= combinationSum(a,b);
    for(int i=0;i<v.size();i++)
    {
        cout<<"(";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j];
            if(j<v[i].size()-1)
                cout<<" ";
        }
        cout<<")"<<endl;
    }
    return 0;
}