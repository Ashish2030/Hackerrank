#include <stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=rev(n);
	printf("%d",a);
	if(palindrome(n)==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
int rev(int n)
{
    int count=0;
    int temp=n;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    if(temp!=0)
    {
        return temp%10*pow(10,count-1)+rev(temp/10);
    }
}
int palindrome(int n)
{
    if(n==rev(n))
    return 1;
    else
    return 0;
}
