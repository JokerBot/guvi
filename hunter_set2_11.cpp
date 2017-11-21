#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin>>s;
 for(int i=0,j=s.length()-1;i<j;i++,j--)
 {
   char temp=s[i];
   s[i]=s[j];
   s[j]=temp;
 }
cout<<s;
}
