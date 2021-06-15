#include<bits/stdc++.h>
using namespace std;

string decode(string& s,int& index)
{
    string decodedstr="";
    if(index==s.length())
        return decodedstr;
    int n=0;
    while(index<s.length())
    {
        if(s[index]>='0' and s[index]<='9')
            n=(n*10)+s[index]-'0';
        else if(s[index]=='[')
        {
            string next=decode(s,++index);
            while(n)
            {
                decodedstr+=next;
                n--;
            }
        }
        else if(s[index]==']')
            return decodedstr;
        else
            decodedstr+=s[index];
        index++;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int index=0;
        cout<<decode(s,index)<<endl;
    }
}