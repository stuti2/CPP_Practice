#include<bits/stdc++.h>
using namespace std;

void arrange(long long arr[], int n) 
{
  int a[n];
  for(int i=0;i<n;i++)
    arr[i]+=(arr[arr[i]]%n)*n;
  for(int i=0;i<n;i++)
    arr[i]=arr[i]/n;
}
int main()
{
  #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
  #endif
  int n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  arrange(a,n);
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
