#include<stdio.h>
int main()
{ int i,j,k,boun,n;
    
    
    printf("enter the number: ");
    scanf("%d",&n);
    boun=2*n+1;
    
    for(j=n;j>0;j--)
    {  
        for(i=0;i<j;i++)
        { printf("*");}
        
        for(k=1;k<=boun-2*j;k++)
        { printf(" ");}
        
        for(i=0;i<j;i++)
        { printf("*");}
        
    printf("\n");
    }
    
    return 0;
}
