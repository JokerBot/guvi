#include<iostream>
#include<vector>
using namespace std;

int main()
{   float x,sum1,sum2,c1,c2,av1,av2;
    int size,flag=0;
    vector<float> v;
    
    cout<<"eneter the size of array";
    cin>>size;
    
    cout<<"enter the array elements\n";
    for(int i=0;i<size;i++)
    { cin>>x;
       v.push_back(x);
    }
      
       for(int i=0;i<size;i++)
       {  sum1=0,sum2=0;c1=0;c2=0;
               
               for(int j=0;j<=i;j++)
              { sum1=sum1+v[j];c1++;}
        
               av1=sum1/c1;
        
        
               for(int k=size-1;k>i;k--)
              { sum2=sum2+v[k];c2++;}
       
               av2=sum2/c2;
       
            if(av1==av2)
            { flag=1;
             break;}
      }
    
    
    if(flag==1)
    {  cout<<"\n";
          
           for(int i=0;i<c1;i++)
           { cout<<v[i]<<" ";}
              
              cout<<endl;
           
           for(int j=c1;j<size;j++)
           { cout<<v[j]<<" ";}
          
    }
    else
    { cout<<"not possible";}
    
return 0;
}
