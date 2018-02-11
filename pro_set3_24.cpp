#include<bits/stdc++.h>
using namespace std;


void calc(string s)
{
    int i=s.length()-1;
    
    cout<<s<<endl; 
    
    while(i>-1)
    {
        if(s[i]=='0')
        {
            s[i]='1';
            calc(s);
            return;    
        }
        s[i]='0';
        i--;
    }
        
}


int main()
{
    int n;
    cin>>n;
    
    string s="";
    for(int i=0;i<n;i++)
    {
        s+="0";
    }
    
    calc(s);    
}
