#include<bits/stdc++.h>
using namespace std;

string calc(string s)
{    
    int total=0;
    for(int i=0;i<s.length();i++)
    {
        int val=(int)s[i]-(int)'0';
        total+=val;
    }
    
    string s1=to_string(total);
    
    for(int i=0,j=s1.length()-1;i<j;i++,j--)
    {  
        if(s1[i]!=s1[j]){return "NO";}
    }
    
    return "YES";
}

int main()
{
    string s;
    cin>>s;
    
    cout<<calc(s);
}
