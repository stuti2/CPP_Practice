#include<bits/stdc++.h>
using namespace std;
bool allBitsAreSet(unsigned int n)
{
    if (((n + 1) & n) == 0)
        return true;  
    return false;
}
 
bool hasAlternatingBits(int n) 
{
    unsigned int num = n ^ (n >> 1);
    return allBitsAreSet(num);       
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    cout<<hasAlternatingBits(n); 
}
