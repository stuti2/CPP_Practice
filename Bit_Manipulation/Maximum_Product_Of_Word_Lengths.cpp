#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<string>& words, int n);

int maxProduct(vector<string>& words, int n) 
{
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto x:words[i])
            v[i]|=(1<<(x-'a')); 
    }
    int maxlen=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((v[i]&v[j])==0)
            {
                int val=words[i].size()*words[j].size();
                maxlen=max(maxlen,val);
            }            
        }
    }
    return maxlen;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    vector<string>words(n);
    for(int i=0;i<n;i++)
        cin>>words[i];
    cout<<maxProduct(words,n);
}
