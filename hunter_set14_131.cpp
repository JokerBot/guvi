#include<bits/stdc++.h>
using namespace std;

int main()
{  
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    
    sort(arr.begin(),arr.end());
    
    for(int i=0,j=arr.size()-1;i<j;i++,j--)
    {
        cout<<arr[j]<<" ";
        cout<<arr[i]<<" ";
    }
}
