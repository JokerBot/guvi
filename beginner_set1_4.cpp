#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a;
    cin>>a;
    
    if(a>=97 &&a<=122 || a>=65 &&a<=90)
    {cout<<"alphabet";}
    else
    {cout<<"not an alphabet";}

}

/*
input: a
output: alphabet

input: Z
output: alphabet

input: {
output: not an alphabet

*/
