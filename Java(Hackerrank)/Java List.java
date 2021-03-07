import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
 
public class Solution {

    public static void insertele(int ind, int val, List<Integer> ans) //
    {
        if(ind>=0 && ind<ans.size())
        {
            
            ans.add(ind, val);
        }
        if(ind==ans.size())
        {
           // System.out.println(ind+" "+val);
            ans.add(val);
        }
    }
    public static void delete(int ind, List<Integer> ans)
    {
        if(ind>=0 && ind<ans.size())
         ans.remove(ind);
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        List <Integer> l = new ArrayList<> ();
        for(int i=0;i<n;i++)
        {
            l.add(s.nextInt());
        }
       // System.out.println(l);
        int q = s.nextInt();
          while(q>0)
        {
            s.nextLine();
            String str = s.next();
            switch (str)
               {
                
                case "Insert":

                       //  System.out.println("a");
                       int ind = s.nextInt();
                        int val = s.nextInt();
                          insertele(ind,val,l);
                         break;
                case "Delete":
                     // System.out.println("a");
                      int x = s.nextInt();
                       delete(x,l);
                          break;

            }
            q--;
        }
        for(int i:l)
        {
             System.out.print(i+" ");
        }
     
    }
}
