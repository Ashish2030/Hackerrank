#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}