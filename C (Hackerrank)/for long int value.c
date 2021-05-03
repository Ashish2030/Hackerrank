#include <stdio.h>
int sum(long int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
   }
   return s;
}
int main()
{
      long int n;
   
    scanf("%ld",&n);
   int c=sum(n);
    while(c/10!=0)
    {
        c=sum(c);
    }
    printf("%d",c);
	return 0;
}
