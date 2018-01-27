//reversing words
#include<bits/stdc++.h>
using namespace std;
static string res="";
void rev(string s,int l,int r)
{
    for(int i=l;i<=r;i++)
    {res+=s[i];}
    res+=' ';
}


int main()
{  
   string s="hello world this";
   
   for(int j=s.length(),i=s.length()-1;i>-1;i--)
   {
     if(s[i]==' ')
     {   
         rev(s,i+1,j-1);
         j=i;
        
     }
     else if(i-1==-1){rev(s,i,j-1);}
     
   }
   cout<<res;
}
