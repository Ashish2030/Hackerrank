
#include <stdio.h>


int gcd(int a, int b);


int main()
{
    int c, d, hcf;
    
    
    printf("Enter any two numbers to find GCD: ");
    scanf("%d%d", &c, &d);
    
    hcf = gcd(c, d);
    
    printf("GCD of %d and %d = %d", c, d, hcf);
    
    return 0;
}


int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}