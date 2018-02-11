#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    
    int pos=0;
    
    for(int i=0;i<s.length()-1;i++)
    {
     if(s[i]<s[i+1]){pos=i+1;break;}   
    }
    
    for(int i=pos;i<s.length();i++)
    {cout<<s[i];}
    
}

