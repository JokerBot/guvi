#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    
    int max=0;
    
    if(max<x)
    max=x;
    if(max<y)
    max=y;
    if(max<z)
    max=z;
    
cout<<max;
}

/*
input: -4 -3 3
output: 3

input: 0 0 1
output: 1


*/
