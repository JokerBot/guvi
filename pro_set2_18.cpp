#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr={2,3};
    int sum=6;
    int n=arr.size();
    
    vector<int> row1(sum+1,INT_MAX-1),row2(sum+1,-1);
    row1[0]=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<sum+1;j++)
       {
           
          if(arr[i]<=j)
          {  
              if(row1[j]>row1[j-arr[i]]+1)
              { 
                row1[j]=row1[j-arr[i]]+1;
                row2[j]=i;
              }
              
          }
         
          
       }
      
    
    }
    
    if(row1[sum]==INT_MAX-1){cout<<"not possible";}
    else
    {
       map<int,int> m;
       while(sum!=0)
       {
          int i=row2[sum];
          sum=sum-arr[i];
          auto itr=m.find(arr[i]);
          if(itr!=m.end()){itr->second +=itr->second;}
          else{m.insert(make_pair(arr[i],1));}
       } 
       
       for(auto itr=m.begin();itr!=m.end();itr++)
       {
           cout<<itr->second<<" coins of "<<itr->first<<endl;
       }
       
       
    }
    
}
