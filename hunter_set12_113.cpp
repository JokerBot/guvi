#include<bits/stdc++.h>
using namespace std;

string calc(int n)
{
    if(n==1){return "YES";}
    else if(n%2!=0){return "NO";}
    
    return calc(n/2);
}



int main()
{
    int n; cin>>n;
    
    cout<<calc(n);
}
