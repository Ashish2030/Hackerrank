#include <stdio.h>
int fun( int);
int main() 
{
    int m;
    scanf("%d",&m);
    int c=fun(m);
    printf("%d",c);
	
	return 0;
}
int fun(int n)
{
   
if(n==0)
{
    return 0;
}
    int r=n%10;
{ 
    if (r%2== 0) 
    {
     
    return (r+fun(n/10)*10);
    }
    else
    {
    return fun(n/10);
    }
} 
}
  