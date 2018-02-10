#include<bits/stdc++.h>
using namespace std;

string calc(string s)
{     char temp;
    for(int i=s.length()-1;i>0;i--)
    {
        for(int j=i-1;j>-1;j--)
        {
            if(s[i]>s[j])
            {
                temp=s[i]; s[i]=s[j]; s[j]=temp; return s;
            }
        }
        
    }
    return "impossible";
}

int main()
{
    string s;
    cin>>s;
    
    cout<<calc(s);
}
