#include<bits/stdc++.h>
using namespace std;


int findK(vector<int> nums, int k)
{

    priority_queue<int> pq;
    
    for(int i=0;i<nums.size();i++)
    {
         pq.push(nums[i]);
    }
    while(k-1!=0)
    { pq.pop();k--;}
    
    return pq.top();
}


int main()
{   int k;
    vector<int> arr={1,3,4,5,6,7,3,23,4,5,67,3};
    cin>>k;
    cout<<findK(arr,k);    
    
}
