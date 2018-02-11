#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n;
    cin>>m>>n;
    
    vector<vector<int> > arr(m,vector<int> (n));
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {cin>>arr[i][j];}
    }
    
    vector<int> arr2;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {arr2.push_back(arr[i][j]);}
    }
    
    sort(arr2.begin(),arr2.end());
    
    int k=0;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
         {arr[i][j]=arr2[k];k++;}
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {cout<<arr[i][j]<<" ";}
        cout<<endl;
    }
    
}
