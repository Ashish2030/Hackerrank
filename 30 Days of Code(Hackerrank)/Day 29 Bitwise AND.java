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
        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String[] nk = scanner.nextLine().split(" ");

            int n = Integer.parseInt(nk[0]);

            int k = Integer.parseInt(nk[1]);
            int s[]=new int[n];
            for(int i=0;i<n;i++)
            {
                s[i]=i+1;
            }
            List<Integer> aq=new ArrayList<>();
            int max=-1;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if((s[i] & s[j])<k)
                    {
                       if((s[i] & s[j])>max)
                       {
                           max=s[i] & s[j];
                       }
                    }
                }
            }
            System.out.println(max);
        }
        

        scanner.close();
    }
}
