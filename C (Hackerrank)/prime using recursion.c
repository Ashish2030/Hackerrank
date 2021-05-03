#include<stdio.h>
int prime(int,int );
int main()
{
	int a;
	scanf("%d",&a);
     int c=prime(a,a/2);
     if(c==1)
     {
     	printf("prime");
	 }
	 else
	 {
	 	printf("not prime");
	 }
	 return 0;
 }
 int prime(int a,int i)
 {
 	if(i==1)
 	{
 	    return 1;
 	}
 	else
 	{
 	    if(a%i==0)
 	    {
 	        return 0;
 	    }
 	    else
 	    {
 	        return (a,i-1);
 	    }
 	}
 }
 	