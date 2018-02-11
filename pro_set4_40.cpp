#include<bits/stdc++.h>
using namespace std;

string checkmap(map<char,int> m)
{
    
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second!=0){return "NO";}
    }
    return "YES";
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    
    map<char,int> m;
    
    for(int i=0;i<s1.length();i++) m[s1[i]]+=1;
    for(int i=0;i<s2.length();i++) m[s2[i]]-=1;
    
    cout<<checkmap(m);
}
