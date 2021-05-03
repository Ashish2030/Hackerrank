#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    int i;
    char* c[11]={"odd","one","two","three","four","five","six","seven","eight","nine","even"};
      for( i= a;i<=b;i++)
      {
       if(i<=9)
       {
         printf("%s\n",c[i]);
       }
       else
       {
           if(i%2==0)
           {
               printf("%s\n",c[10]); 
           }
           else
           {
                printf("%s\n",c[0]); 
           }
       }
      }

    return 0;
}

