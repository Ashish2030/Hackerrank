import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        try
        {
            int a=Integer.parseInt(S);
            System.out.println(a);
        }
        catch(Exception e)
        {
           System.out.println("Bad String");
        }
    }
}
