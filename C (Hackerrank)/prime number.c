#include <stdio.h>

int main()
{
    int m,n,j,i;
    scanf("%d%d",&m,&n);
	for( i=m;i<=n;i++)
	{
	    for( j=2;j<i;j++)
	    {
	        if(i%j==0)
	        {
	            break;
	        }
	      
	    }
	      if(j==i)
	     {
	         printf("%d\n",i);
	     }
	}
	return 0;
}