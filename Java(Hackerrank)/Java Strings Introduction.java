import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int length=A.length()+B.length();
        System.out.println(length);
        if(A.compareTo(B)>0)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
        String c=A.substring(0,1).toUpperCase();
        String d=A.substring(1,A.length());
        A=c+""+d;
        String c1=B.substring(0,1).toUpperCase();
        String d1=B.substring(1,B.length());
        B=c1+""+d1;
        System.out.println(A+" "+B);
        
        
        
    }
}



