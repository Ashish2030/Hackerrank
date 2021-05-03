#include<stdio.h>
#define Area(x) x*x
#define Costpaint(x,y,z) (z*y + Area (x))
void main()
{
   int A = 8, B= 6, C = 4;
     printf("The area of square= %d\n", Area(A));
   printf("Cost of paint= %d\n", Costpaint(A,B,C));
}