#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,k;
    char arr[4][20];
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         scanf("%s",arr[i]);
     }
    
     for(int i=0;i<n;i++)
     {
         k=i;
         c=strcmp(arr[k],arr[k+1]);
         
         if(c==0)
         {
             printf("equal");
             break;
         }
         else if(c>0)
         {
             printf("%s",arr[k+1]);
             break;
         }
         else
         {
             printf("%s",arr[k]);
             break;
         }
     }
}
     