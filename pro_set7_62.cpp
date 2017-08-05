#include<iostream>
#include<string>
static int max_palindrome=0;
static int m[3];
int* palindrome(const std::string&,int,int);
using namespace std;

int main()
{
    string str;int len;
    int *s;
    int x,y;
    
    cout<<"enter the string:";
    cin>>str;
   
    len=str.length();
   
    //iterating through each element in string
    for(int i=1;i<len-1;i++)
    {
          if(str[i]==str[i+1])  
           { 
             x=i;
             y=i+1;
           }
          else
           {
             x=i;
             y=i;
           }
    
       s=palindrome(str,x,y);
    }
    
    //checking for existence of palindrome
    if(s[0]==0)
    {cout<<"no palindrome found";exit(1);}
    
    int pal_start = s[1]-s[0];
    int pal_end = s[0]+s[2];
    
    //printing the max palindrome in the string
    for(int i=pal_start;i<=pal_end;i++)
    {
        cout<<str[i];
        
    }
    
return 0;}



int* palindrome(const std::string& str,int x,int y)
{   int count=0;
    
      for(int i=1;i<=x;i++)
      {
         if(str[x-i]!=str[y+i])
         { break;}
       
         count++;
      }
    
    if(max_palindrome<count)
    { max_palindrome = count;
      m[0]=count;
      m[1]=x;
      m[2]=y;
    
    }
    
return m;    
}    
    
