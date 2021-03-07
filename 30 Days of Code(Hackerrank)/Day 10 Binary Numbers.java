import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        String h=Integer.toBinaryString(n);
        int max=1;
        int flag=0;
        int count=1;
        for(int i=0;i<h.length()-1;i++)
        {
            int j=i+1;
            if(h.charAt(i)==h.charAt(j)&& h.charAt(i)!='0')
            {
                count++;
                if(count>max)
                {
                    max=count;
                }
            }
            else
            {
                count=1;
            }
        }
        System.out.println(max);

        scanner.close();
    }
}
