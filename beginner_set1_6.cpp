#include<iostream>

using namespace std;

int check(int year)
{
    if(year%400==0)
        return 1;
 
    if(year%100==0)
        return 0;

    if(year%4==0)
        return 1;
        
    return 0;
}
 


int main()
{
    int year;
    cin>>year;
    
    if(check(year))
    {cout<<"leap year";}
    else
    {cout<<"not a leap year";}
 
}

/*
input: 2000
output: leap year

input: 2014
output: not a leap year


*/
