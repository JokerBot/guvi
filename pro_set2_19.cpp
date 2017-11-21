#include<bits/stdc++.h>
using namespace std;
static int cnt=0;
static int maxv=-99999;

static int sx,sy,fx,fy;


bool intersec(int arr[][5],int x1,int y1,int x2,int y2)
{
    int i=y1,j=x2;
    while(1)
    {  
        if(arr[x1][i]!=1 || arr[j][y2]!=1){return false;}
        
        if(x1==j  && i==y2){return true;}
            
        i++;j++;
    }
    return true;
}

void calc(int arr[][5],int x,int y,int m,int n)
{   
    int i,j;
    if(arr[x][y]!=1){return;}
  
    int local_fx,local_fy;
    for(i=x+1,j=y+1;i<m && j<n;i++,j++)
    {   
        if(arr[i][y]!=1 || arr[x][j]!=1)
        {break;}
        
        if(intersec(arr,i,y,x,j))
        { cnt++;
        
        }
        else
        {break;}
    
    }

    if(cnt>maxv)
    {
        maxv=cnt;
       sx=x;
       sy=y;
       fx=i-1;
       fy=j-1;
    }
    
}




int main()
{
   int arr[6][5]={{0,1,1,0,1},{1,1,1,1,0},{1,1,1,1,0},{1,1,1,1,0},{1,1,1,1,1},{0,0,0,0,0}};
   int m=6,n=5;
   for(int i=0;i<m-1;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(i==m-2 && j==n-1){break;}
           
           calc(arr,i,j,m,n);
           cnt=0;
           
       }
       
       
   }
    cout<<"start("<<sx<<","<<sy<<")"<<endl;
    cout<<"end ("<<fx<<","<<fy<<")"<<endl;
    
    
    
}
