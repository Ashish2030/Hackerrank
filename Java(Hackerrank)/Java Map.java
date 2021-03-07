//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh)
    {
        Scanner sc = new Scanner(System.in);
        Map<String,Integer> u=new HashMap<>();
        int a=Integer.parseInt(sc.nextLine());
        int p=a;
        while(a>0)
        {
            String name=sc.nextLine();
            int number=Integer.parseInt(sc.nextLine());
            u.put(name,number);
            a--;
        }
        while(sc.hasNext())
        {
        String a1=sc.nextLine();
        if(u.containsKey(a1))
        {
             System.out.println(a1+"="+u.get(a1));
        }
        else
        {
            System.out.println("Not found");
        }
        }
        
    }
}



