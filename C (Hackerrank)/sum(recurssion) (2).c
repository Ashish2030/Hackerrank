

#include<stdio.h>
int factorial( int a);
int main()
{
    int factorial , a;
    scanf("%d",&a);
    printf("%d",factorial(a));
}
factorial(int a)
{
    if(a==0)
    return 1;
}
else
{
    return (a*factorial(a-1));
}









































































































































































































#include<stdio.h>
int sum(int a);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
}
sum (int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return(a%10+ sum (a/10)); 
    }
}
















     