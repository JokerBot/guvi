#include<iostream>
#include<string>
using namespace std;




int main()
{
   int n,x;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>x;
       if(x==i){cout<<i;}
       arr[i]=x;
   }
}
