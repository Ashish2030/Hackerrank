#include <stdio.h>

int main()
{
    int fact=1,a;
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
	
	return 0;
}