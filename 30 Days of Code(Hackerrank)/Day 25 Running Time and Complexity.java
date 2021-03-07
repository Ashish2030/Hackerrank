import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)
     {
        Scanner sc=new Scanner(System.in);
        int times=sc.nextInt();
        while(times>0)
        {
        int a =sc.nextInt();
        if(a==1)
        {
            System.out.println("Not prime");
        }
        else
        {
        int flag=0;
        for(int i=2;i<=Math.sqrt(a);i++)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
         System.out.println("Not prime");   
        }
        else
        {
         System.out.println("Prime");   
        }
        }
        times--;
        }
    }
}
