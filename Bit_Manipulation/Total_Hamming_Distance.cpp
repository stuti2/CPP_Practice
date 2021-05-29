#include<bits/stdc++.h>
using namespace std;

int totalHammingDistance(vector<int>& nums) 
{
    int ans=0,i;
    for(i=0;i<32;i++)
    {
        int count =0;
        for(auto x:nums)
        {
            count+=((x>>i)&1);
        }
        ans+=(count*(nums.size()-count));
    }
    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n,i;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<totalHammingDistance(a);
}