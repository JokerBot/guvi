#include<bits/stdc++.h>
using namespace std;

int calc(vector<int> arr1)
{
    if(arr1.size()==1){return arr1[0];}
    
    vector<int> arr2;
    for(int i=1;i<arr1.size();i=i+2)
    {
        arr2.push_back(arr1[i]);
    }
    return calc(arr2);
}


int main()
{
    int n;  cin>>n;
    
    vector<int> arr(n),arr1(n);
    for(int i=0;i<n;i++)
    {cin>>arr[i];arr1[i]=i+1;}
    
    cout<<calc(arr1);
}
