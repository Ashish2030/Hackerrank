import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner (System.in);
        
        try
        {
                int t=sc.nextInt();
                int y=sc.nextInt();
                System.out.println(""+(t/y));
        }
                
            catch(InputMismatchException r)
            {
                System.out.println("java.util.InputMismatchException");
            }
        catch(Exception a)
        {
            System.out.println(a);
        }
    }
}
