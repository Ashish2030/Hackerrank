import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[][] numArray = new String[6][];
        int largestSum = 0;
        for(int i=0; i<6; i++){
            numArray[i]=sc.nextLine().split(" ");
        }
        
        for(int i=0;i<=3;i++){
            for(int j=0;j<=3;j++){
                int sum = Integer.parseInt(numArray[i][j])+Integer.parseInt(numArray[i][j+1])+Integer.parseInt(numArray[i][j+2])+Integer.parseInt(numArray[i+1][j+1])+Integer.parseInt(numArray[i+2][j])+Integer.parseInt(numArray[i+2][j+1])+Integer.parseInt(numArray[i+2][j+2]);
                if(i==0 && j==0){
                    largestSum=sum;
                }else{
                    if(sum>largestSum){
                        largestSum=sum;
                    }
                }
            }
        }
        System.out.println(largestSum);
    }
}

  
