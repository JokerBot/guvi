#include<bits/stdc++.h>
using namespace std;

void generate_paranthesis(vector<string> &res,string s,int left,int right)
{    
    if(left==0 && right==0)
    {
        res.push_back(s);
        return;
    }
    if(left>0){generate_paranthesis(res,s+"{",left-1,right);}
    if(right>left){generate_paranthesis(res,s+"}",left,right-1);}
}

int main()
{
    int n;
    cin>>n;
    vector<string> res;
    
    generate_paranthesis(res,"",n,n);
    
    for(int i=0;i<res.size();i++)
    {cout<<res[i]<<endl;}
}
