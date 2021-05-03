#include<stdio.h>
int main()
{
    int a,b,c,flag=0;
    scanf("%d",&a);
    b=a*a;
    while(a>0)
    {
        if(a%10!=b%10)
        {
            flag=1;
           
        }
         a=a/10;
            b=b/10;
        }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}