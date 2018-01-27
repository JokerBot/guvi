
//longest common subsequence using dp

#include<bits/stdc++.h>
using namespace std;

string calc(string s1,string s2)
{ 
    int n1=s1.length()+1,n2=s2.length()+1;
    int dp[n1][n2];
   
   for(int i=0;i<n1;i++)
   {
      for(int j=0;j<n2;j++)
      {
         if(i==0 ||j==0){dp[i][j]=0;continue;}   
           
           if(s1[i-1]==s2[j-1])
           {dp[i][j]=dp[i-1][j-1]+1;}
           else
           {
              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);    
           }
           
      }
         
   }
   
   string res="";
   int i=n1-1,j=n2-1;
   while(dp[i][j]!=0)
   {
      if(dp[i-1][j]!=dp[i][j])
      {res=s1[i-1]+res;
       i--;j--;
      }
      else
      {
        i--; 
      }
      
   }
   return res;
}



int main()
{
  string s1; cin>>s1;
  string s2; cin>>s2;
  
  cout<<calc(s1,s2);
    
}
