#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int num1, num2, hcf;
    
        printf("Enter any two numbers to find GCD: ");
    scanf("%d%d", &num1, &num2);
        hcf = gcd(num1, num2);
        printf("GCD of %d and %d = %d", num1, num2, hcf);
        return 0;
}
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}
