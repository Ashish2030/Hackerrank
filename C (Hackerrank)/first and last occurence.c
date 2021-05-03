#include <stdio.h>

int main()
{
int n,arr[100],i,first=-1,last=-1,k=0;
    scanf("%d",&n);
     scanf("%d",&k);
    
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
    for( i=0;i<n;i++)
    { 
       if (k!=arr[i])
        continue;
           if(first==-1)
          first=i;
         last=i; 
  }
     printf("%d\n",first);
      printf("%d",last);
	return 0;
}