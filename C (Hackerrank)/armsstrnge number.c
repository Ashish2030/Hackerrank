#include <stdio.h>
#include<math.h>
int main() 
{
	int a ,b,sum=0,d,count=0,e;
	scanf("%d",&a);
	d=a;
	e=a;
		while(d>0)
	{
	   count++;
	   d=d/10;
	}
	while(e!=0)
	{
	    b=e%10;
	    sum=sum+pow(b,count);
	    e=e/10;
	}
	
	if(a==sum)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
}