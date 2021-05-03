#include <stdio.h>

int main() 
{
    int a,sum=0,b;
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        b=a%i;
        if(b==0)
        {
            sum=sum+i;
        }
    }
	if(a==sum)
	{
	    printf("perfect");
	}
	else
	{
	    printf("not");
	}
	return 0;
}