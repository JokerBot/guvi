
//longest palindromic substring

#include<bits/stdc++.h>
using namespace std;


int helper(string s,int l,int r)
{   int  cnt =0;
    int i=l,j=r;
    while(i!=-1 && j!=s.length() && s[i]==s[j])
    {cnt+=2;i--;j++;}
    if(l==r){cnt--;}
    return cnt;
}

string calc(string s,int l,int r)
{   int maxi=INT_MIN;
    string res="";
    int I;
    for(int i=l,j=r;j<s.length();i++,j++)
    {
       int temp=helper(s,i,j);
       
       if(temp>maxi)
       {maxi=temp;
        if(i==j){I=i-((maxi-1)/2);}
        else{I=i-((maxi-2)/2);}
       }
    }
    
    for(int i=I;i<I+maxi;i++)
    {res+=s[i];}
    return res;
}


int main()
{
    string s; cin>>s;
    string s1=calc(s,0,0);
    string s2=calc(s,0,1);
    if(s1.length()>s2.length()) cout<<s1;
    else cout<<s2;
}
