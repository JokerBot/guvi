#include<iostream>
#include<string>
using namespace std;

int main()
{
    string vowels="aeiou";
    char a;
 
    cin>>a;
    if(vowels.find(a)!=-1)
    {cout<<"vowels";}
    else
    {cout<<"consonant";}

}

/*
input: a
output: vowels

input: w
output: consonant

*/
