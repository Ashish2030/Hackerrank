import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static int calculate(int rd, int rm, int ry, int dd, int dm, int dy)
    {  int fine =0;
        if(ry>dy)
        {
            fine = 10000;
        }
        if(rm>dm && ry==dy)
        {
            fine = (rm-dm)*500;
        }
        if(rd>dd && rm==dm && ry==dy)
        {
            fine = (rd-dd)*15;
        }
        return fine;
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int rd = sc.nextInt();
        int rm = sc.nextInt();
        int ry = sc.nextInt();
        int dd = sc.nextInt();
        int dm = sc.nextInt();
        int dy = sc.nextInt();
        
        int fine = calculate(rd, rm, ry, dd, dm, dy);
        System.out.println(fine);
    }
}
