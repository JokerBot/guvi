#include<iostream>
using namespace std;


int natSum(int num)
{
    if(num==0){return 0;}
    
    return natSum(num-1)+num;
}

int main()
{
  int num;
  cin>>num;
  cout<<natSum(num);
  
}
