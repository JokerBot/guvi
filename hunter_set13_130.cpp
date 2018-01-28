#include<bits/stdc++.h>
using namespace std;
static int result=0;

void prime(int n)
{ 
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){return;}
    }
    result+=n;
}

int main()
{
    int n;  cin>>n;
    
    for(int i=2;i<=n;i++)
    {
        if(i%10==3){prime(i);}
    }
    cout<<result;
}
