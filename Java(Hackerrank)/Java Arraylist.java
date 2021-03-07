import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
      
        Scanner sc=new Scanner(System.in);
        int number=sc.nextInt();
        ArrayList<ArrayList<Integer>> u=new ArrayList<>();
        while(number>0)
        {
            ArrayList<Integer> j =new ArrayList<Integer>();
            int num=sc.nextInt();
            while(num>0)
            {
                j.add(sc.nextInt());
                num--;
            }
            u.add(j);
            number--;
        }
        
        int number1=sc.nextInt();
        while(number1>0)
        {
            int k=sc.nextInt();
            ArrayList<Integer> o1=u.get(k-1);
            int element=sc.nextInt();
            if(o1.size()>=element)
            {
              System.out.println(o1.get(element-1));  
            }
            else
            {
               System.out.println("ERROR!"); 
            }
            number1--;
        }
        
    }
}
