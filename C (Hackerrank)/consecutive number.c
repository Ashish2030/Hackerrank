#include <stdio.h>
int threeCon (int a, int b, int c);
int threeCon (int a, int b, int c)
{
 if ( a == b || b == c || a == c)
  {
 return 0;
 }
  else if (((a == b + 1 || a == b - 1) || (a == c + 1 || a == c - 1)) && ((b == c + 1 || b == c - 1))
 || ((b == c + 1 || b == c - 1) || (a == b + 1 || a == b - 1)) && (a == c + 1 || a == c - 1)) 
 {
 return 1;
}
return 0;
}

int main()
{
 int a, b,c,ch;

 scanf("%d%d%d",&a,&b,&c);
 ch= threeCon (a, b, c);
if(ch)
printf("consecutive");
else
printf("non consecutive");
}