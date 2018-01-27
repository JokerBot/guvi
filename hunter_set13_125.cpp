#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;  cin>>s;
    
    map<char,int> m;
    
    for(int i=0;s[i];i++)
    {m[s[i]]+=1;}
    
    for(int i=0;s[i];i++)
    {
        if(m[s[i]]==1)
        {cout<<s[i];}
    }
    
    
}


