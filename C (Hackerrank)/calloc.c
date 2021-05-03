#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,n,sum=0;
    scanf("%d",&n);
   ptr = (int*)calloc(n, sizeof(int));
    if(ptr ==NULL)
    {
        printf("not");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
         scanf("%d",(ptr + i));
         sum=sum + * (ptr+i);
        }
        printf("%d",sum);
       free(ptr);
   }
 
	
	return 0;
}