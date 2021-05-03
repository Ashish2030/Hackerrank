#include <stdio.h>
int power(int ,int);
int main() 
{
    int m,n;
    scanf("%d%d",&m,&n);
    int c=power(m,n);
    printf("%d",c);
	
	return 0;
}
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,b-1);
    }
}