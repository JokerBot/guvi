#include<bits/stdc++.h>
using namespace std;

struct node
{
    vector<int> pos;
};


bool calc(string a,string b)
{
    vector<node> arr(128);
    for(int i=0;i<a.length();i++)
    {
        arr[(int)a[i]].pos.push_back(i);
    }
    
    
    for(int i=0;i<b.length();i++)
    {
        if(arr[(int)b[i]].pos.size()!=0)
        {
            for(int j=0;j<arr[(int)b[i]].pos.size();j++)
            {  
                int fpos=arr[(int)b[i]].pos[j];
                
                if(b[i+1]==a[fpos+1]){return true;}
            }
            
        }
        
    }
    return false;
      
}



int main()
{
    string a,b;
    cout<<"enter two strings:";
    cin>>a;
    cin>>b;
    
    if(calc(a,b))
    {cout<<"true";}
    else
    cout<<"false";
}


