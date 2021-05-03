#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
  char s[100];
  char q[100];
    scanf("%c",&c);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&q);
    printf("%c\n%s\n%s",c,s,q);
    return 0;
}

