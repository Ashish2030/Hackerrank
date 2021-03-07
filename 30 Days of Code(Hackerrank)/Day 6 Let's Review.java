import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int a=Integer.valueOf(sc.nextLine());
     
        while(a>0)
        {
            String h=sc.nextLine();
            String temp1="";
            String temp2="";
            for(int i=0;i<h.length();i++)
            {
                if(i%2==0)
                {
                  temp1=temp1+h.charAt(i);  
                }
                else
                {
                     temp2=temp2+h.charAt(i);  
                }
            }
            System.out.println(temp1+" "+temp2);
            a--;
        }
    }
}
