

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
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=rev(n);
    if (pa(n)==1);
    printf("yes");
    else
    printf("no");
    return 0;
}
int rev(int n)
{
    int count=0;
    int temp=n;
    while(n!=0)
{
    count++;
    n/10;
}
    if (temp!=0)
    {
        return temp%10*pow(10,count-1)+rev(temp/10);
}
}
int pa(int a)
{
    if(n==rev(n))
    return 1;
    else 
    retrun 0;
}







































     