#include <stdio.h>
int fact (int);

int main()
{
    int m;
    scanf("%d",&m);
    int c=fact(m);
    printf("%d",c);
	
	return 0;
}
int fact(int m)
{
   
    
    if(m==0)
    {
        return 1;
    }
    else
    {
        return m*fact(m-1);
    }
 
}