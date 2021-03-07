import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        String a=sc.nextLine();
        String b=sc.nextLine();
        BigInteger a1=new BigInteger(a);
        BigInteger b1=new BigInteger(b);
        System.out.println(a1.add(b1));
         BigInteger mul=a1.multiply(b1);
        System.out.println(mul);
    }
} 
