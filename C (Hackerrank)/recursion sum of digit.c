#include <stdio.h>
int sum(int );
int main() 
{
int m;
scanf("%d",&m);
int c=sum(m);
printf("%d",c);
	return 0;
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10+sum(n/10);
    }
}