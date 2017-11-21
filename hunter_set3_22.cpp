#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr={5,4,3,2,1};
    vector<int> res(arr.size(),1);
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<res.size();j++)
        {
            if(i==j){continue;}
            
            res[j]=res[j]*arr[i];
        }
        
        
    }
    
    for(int i=0;i<res.size();i++)
    {cout<<res[i]<<" ";}
    
    
}
