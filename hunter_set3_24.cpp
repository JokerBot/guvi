#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr={2,7,11,15};
    int target=9;
    
    map<int,int> m;
    
    for(int i=0;i<arr.size();i++)
    {
        int diff=target-arr[i];
        auto itr=m.find(diff);
        if(itr!=m.end())
        {cout<<diff<<" "<<arr[i];break;}
        else
        {
            m.insert(make_pair(arr[i],0));
        }
        
    }
    
}
