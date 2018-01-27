#include<bits/stdc++.h>
using namespace std;
void swap(string &s,int a,int b)
{   char temp=s[a];
    s[a]=s[b];
    s[b]=temp;
}


void permute(string &s,int l,int r)
{
    if(l==r)
    {cout<<s<<endl;return;}
    
    for(int i=l;i<=r;i++)
    {
        swap(s,l,i);
        permute(s,l+1,r);
        swap(s,l,i);
    }
    
}


int main()
{
    string s;  cin>>s;
    
    permute(s,0,s.length()-1);
}
