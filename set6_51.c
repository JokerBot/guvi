#include<stdio.h>

int main()
{ int i=0,j=0,str1len=-1,str2len=-1;
  unsigned long long  val1=0,val2=0;
  char str1[20],str2[20];

   printf("ENTER STRING 1:");
   fgets(str1,20,stdin);

   printf("ENTER STRING 2:");
   fgets(str2,20,stdin);
                   
          //to find length of string 1
           while(str1[i]!='\0')
           {
             str1len++;i++;
           }

           //to find length of string 2  
           while(str2[j]!='\0')
           {
             str2len++;j++;
           }
 
 //checking whether both strings are entered
 if(str1len==0||str2len==0)
           {printf("ERROR: both strings are required for multiplication\n");
            printf("terminating the program");exit(1);}


//converting  string1 to number
for(i=0;i<str1len;i++)
{
    
    val1=val1*10+(str1[i] - '0');
    
}
 
//converting string2 to number
for(i=0;i<str2len;i++)
{
    
    val2=val2*10+(str2[i] - '0');
    
}


printf("product: %llu",val1*val2);

return 0;}
