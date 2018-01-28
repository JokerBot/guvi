#include<bits/stdc++.h>
using namespace std;
static map<string,int> m;

void calc(string s,int l,int r)
{   int cnt=0;
    int i=l,j=r;
    while(i!=-1 && j!=s.length() && s[i]==s[j])
    {
        string res="";
        for(int I=i;I<=j;I++){res+=s[I];}
         m[res]=1;
         i--;j++;
    } 
    
}


int main()
{
    string s; cin>>s;
    for(int i=0,j=2;j<s.length();i++,j++)
    {calc(s,i,j);}
    for(int i=0,j=1;j<s.length();i++,j++)
    {calc(s,i,j);}
    
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<endl;
    }
}
