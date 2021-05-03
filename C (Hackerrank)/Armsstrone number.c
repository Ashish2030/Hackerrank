#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,sum=0;
    scanf("%d",&a);
   	b=(int)log10(a)+1;
   	while(a>0)
   	{
   		c=a%10;
   		d=sum+pow(c,b);
   		a=a/2;
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
       