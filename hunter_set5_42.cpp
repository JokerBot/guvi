#include<bits/stdc++.h>
/*welco
metoz
ohoco
rpora
tion
*/
using namespace std;

bool findinmatrix(vector<vector<int> > &res, vector<vector<char> > &arr,int row,int col,int x,int y,string s,int pos)
{ 
    
    bool top=false,bottom=false,left=false,right=false;
    static vector<int> temp(2);
    static vector<vector<int> > visited(5,vector<int> (5,0));
   
    //top
    if(x-1>-1 && arr[x-1][y]==s[pos] && visited[x-1][y]==0)
    {   
        if(pos==s.length()-1)
        {
            temp[0]=x-1;
            temp[1]=y;
            res[1]=temp;
            return true;
        }
        
        visited[x-1][y]=1;
         top=findinmatrix(res,arr,row,col,x-1,y,s,pos+1);
        visited[x-1][y]=1;
    }
   
    if(top){return true;}
   
    //bottom
    if(x+1<row && arr[x+1][y]==s[pos] && visited[x+1][y]==0)
    {   
        if(pos==s.length()-1)
        {
            temp[0]=x+1;
            temp[1]=y;
            res[1]=temp;
            return true;
        }
        visited[x+1][y]=1;
        bottom=findinmatrix(res,arr,row,col,x+1,y,s,pos+1);
        visited[x+1][y]=0;
        
    }
    if(bottom){return true;}
    
        
    //right
    if(y+1<col && arr[x][y+1]==s[pos] && visited[x][y+1]==0)
    {   
        if(pos==s.length()-1)
        {
            temp[0]=x;
            temp[1]=y+1;
            res[1]=temp;
            return true;
        }
        visited[x][y+1]=1;
         right=findinmatrix(res,arr,row,col,x,y+1,s,pos+1);
        visited[x][y+1]=0;
        
    }
    if(right){return true;}
    
        
    //left
    if(y-1>-1&& arr[x][y-1]==s[pos] && visited[x][y-1]==0)
    {   
        if(pos==s.length()-1)
        {
            temp[0]=x;
            temp[1]=y-1;
            res[1]=temp;
            return true;
        }
        visited[x][y-1]=1;
        left=findinmatrix(res,arr,row,col,x,y-1,s,pos+1);
        visited[x][y-1]=0;
        
    }
    if(left){return true;}

    return false;
}



int main()
{
    vector<vector<char> > arr={{'w','e','l','c','o'},
                               {'m','e','t','o','z'},
                               {'o','h','o','c','o'},
                               {'r','p','o','r','a'},
                               {'t','i','o','n','@'}
                              };
                 
    vector<vector<int>> res(2,vector<int> (2));                          
    string s="too";
    
    int row=arr.size(),col=arr[0].size();
     
    int flag=0;
    
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
       {
           if(arr[i][j]==s[0] && findinmatrix(res,arr,row,col,i,j,s,1))
           {
               vector<int> temp={i,j};
               res[0]=temp;
               flag=1;
               break;
           }
       }
       if(flag){break;}
    }   
    
    
    
    if(flag)
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){cout<<res[i][j];}cout<<endl;
        }
    }
    else
    {cout<<0;}
}
