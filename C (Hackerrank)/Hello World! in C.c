#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char s[100];
    char a[100]="Hello, World!";
    scanf("%[^\n]%*c", &s);
      printf("%s\n%s",a,s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

