//check whether its is a substring 

#include<bits/stdc++.h>
using namespace std;

string checkSubstring(string s1,string s2)
{   
    for(int I=0;I<s1.length();I++)
    {
        int cnt=0;
        int j=0,i=I;
        while(s1[i]==s2[j])
        {
            cnt++;i++,j++;
        }
        if(cnt==s2.length()){return "yes";}
        
    }
    return "no";
}

int main()
{
    string s1; cin>>s1;
    string s2; cin>>s2;
    cout<<checkSubstring(s1,s2);
    
}
