

#include<bits/stdc++.h>
using namespace std;

static int maxi=INT_MIN;

void calc(vector<int> arr,int pos,int sum)
{
    
    for(int i=pos+2;i<arr.size();i++)
    {
        sum+=arr[i];
        calc(arr,i,sum);
        sum-=arr[i];
    }
  
    if(sum>maxi){maxi=sum;}
    
}

int main()
{
    int n; cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    
    
    for(int i=0;i<arr.size();i++)
    {calc(arr,i,arr[i]);}
   
    cout<<maxi;
}
