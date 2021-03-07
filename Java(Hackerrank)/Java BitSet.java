import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
Scanner get = new Scanner(System.in);
int n = get.nextInt();
int m = get.nextInt();
BitSet b1 = new BitSet(n);
BitSet b2 = new BitSet(m);
BitSet[] bitset = new BitSet[3];
bitset[1] = b1;
bitset[2] = b2;
while ( 0 < m-- ) {
String op = get.next();
int x = get.nextInt();
int y = get.nextInt();
switch (op) {
case "AND":
bitset[x].and(bitset[y]);
break;
case "OR":
bitset[x].or(bitset[y]);
break;
case "XOR":
bitset[x].xor(bitset[y]);
break;
case "FLIP":
bitset[x].flip(y);
break;
case "SET":
bitset[x].set(y);
}
System.out.printf("%d %d%n", b1.cardinality(), b2.cardinality());
}
    }
}
