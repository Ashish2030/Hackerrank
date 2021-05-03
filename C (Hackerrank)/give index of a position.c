#include <stdio.h>

int main()
{
    int m,n;
    char str[]={"iamkumar"};
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        printf("%c",str[i]);
    }
	
	return 0;
}