#include<bits/stdc++.h>
using namespace std;

int maxvalue=-9999999;
class node{
public:
int x,y,sum;
};

int dfs(int arr[][4],int x,int y,int sum,int  visit[][4])
{
    
    visit[x][y]=1;
    stack<node> st;
   
    //basecase
    if(x==3 && y==3)
    {  
        if(maxvalue<sum){maxvalue=sum;}
        return arr[x][y];}
    
    //right
    if(y<3)
    {   node mynode;
        mynode.x=x;
        mynode.y=y+1;
        mynode.sum=arr[x][y+1];
        st.push(mynode);
    }
    //down
    if(x<3)
    {   node mynode;
        mynode.x=x+1;
        mynode.y=y;
        mynode.sum=arr[x+1][y];
        st.push(mynode);
        
    }
    int res;
    while(!st.empty())
    {    
        int x1=st.top().x;
        int y1=st.top().y;
        int sum1=st.top().sum;
        
        visit[x1][y1]==0;
        res=dfs(arr,x1,y1,sum+sum1,visit);
        st.pop();
        visit[x1][y1]==0;
        
    }
    return maxvalue;
}


int main()
{
    int arr[4][4]={{1,10,3,100},{12,2,9,6},{5,7,4,11},{3,7,16,5}};
     int visit[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    cout<<dfs(arr,0,0,arr[0][0],visit);
   
}
