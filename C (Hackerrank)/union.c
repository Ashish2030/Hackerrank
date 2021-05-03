# include <stdio.h>
# include <stdlib.h>
# include <string.h>
 int main()
{
    typedef union
   {
    int i;
    double d;
    char c;
   }TYPE;
 
   TYPE data;
   data.i=50;
   data.d=45.68;
   data.c='A';
 
   printf("Value of i=%d\n", data.i);
   printf("Value of d=%.2f\n", data.d);
   printf("Value of c=%c\n", data.c);
   
}