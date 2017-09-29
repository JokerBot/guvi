import java.util.*;

public class Main{
    
    public static void mapping(Integer data[],Map<Integer,Integer> m)
    {
        
        int x;
        
        for(int i=0;i<data.length;i++)
        {    x=data[i];
            if(m.containsKey(x)){
                
                m.put(x,m.get(x)+1);
                
            }
            else{
                
                m.put(x,1);
            }
            
        }
        
    }
    
    public static void main(String args[])
    {
        
        Scanner sc=new Scanner(System.in);
        
        System.out.println("enter the size of array");
         int si=sc.nextInt();
         Integer data[]=new Integer[si];
         for(int i=0;i<si;i++)
         {
             data[i]=sc.nextInt();
             
         }
        Map<Integer,Integer> m= new HashMap<Integer,Integer>();  
        mapping(data,m);
        printMap(m);
         
       
    
    }
    
    public static void printMap(Map<Integer,Integer> m)
      {
        
           for(Map.Entry<Integer,Integer> entry : m.entrySet())
           {
              if(entry.getValue()>1)
               System.out.println("value= "+entry.getKey() + " count= " + entry.getValue());
            
            }
      } 
    
    
}
