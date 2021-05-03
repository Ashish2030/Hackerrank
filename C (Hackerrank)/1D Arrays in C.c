#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
     int n,i;
     int sum=0;
      scanf("%d",&n);
       int *arr = (int*)malloc(n * sizeof(int));  
       for( i=0;i<n;i++)
       {
           scanf("%d",&arr[i]);
       }
        for( i=0;i<n;i++)
       {
          sum=sum+arr[i];
       }
       printf("%d",sum);

    return 0;
}

