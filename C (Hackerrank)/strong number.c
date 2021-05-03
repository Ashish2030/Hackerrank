#include <stdio.h>

int main()
{
    int a,b,sum=0,c;
    scanf("%d",&a);
    c=a;
    while(c>0)
    {
        b=c%10;
        int fact=1;
        for(int i=1;i<=b;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    c=c/10;
    }
    if(a==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
	
	return 0;
}