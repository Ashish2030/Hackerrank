#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
 if(ptr==NULL)
 {
     printf("ashu");
 }
 else
 {
     for(int i=0;i<n;i++)
     {
         scanf("%d",ptr+i);
         sum=sum+*(ptr+i);
         
     }
    
         printf("%d",sum);
         
          free(ptr);
 }
}