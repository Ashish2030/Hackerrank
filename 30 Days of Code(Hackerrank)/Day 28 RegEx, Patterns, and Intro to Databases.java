import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {


static List<String> p=new ArrayList<>();
static String  temp="@gmail.com";
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int NItr = 0; NItr < N; NItr++) 
        {
            String[] firstNameEmailID = scanner.nextLine().split(" ");

            String firstName = firstNameEmailID[0];

            String emailID = firstNameEmailID[1];

        if(emailID.contains(temp))
        {
            p.add(firstName);
        }
        }
        Collections.sort(p);
        for(String h:p)
        {
            System.out.println(h);
        }

        scanner.close();
    }
}
