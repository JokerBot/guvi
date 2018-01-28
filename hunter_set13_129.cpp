#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    
    vector<int> arr(n);
    int maxi=INT_MIN,maxvalue;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; m[arr[i]]+=1;
        if(m[arr[i]]>maxi){maxi=m[arr[i]];maxvalue=arr[i];}
    }
    cout<<maxvalue;
}
