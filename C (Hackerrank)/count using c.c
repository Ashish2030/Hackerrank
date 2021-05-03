#include <stdio.h>
int count(int );
int main()
{
    int c;
    scanf("%d",&c);
    printf("%d",count(c));
	
	return 0;
}
int count(int a)
{
    int i=1;
    
    if(a<=0)
    {
        return 0;
    }
    else 
    {
        return ((i)+count(a/10)) ;
    }
}