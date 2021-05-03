#include<stdio.h>
#include<string.h>
int main()
{
    int n,c;
   
     char temp[8];
    
     scanf("%d",&n);
     char arr[n][20];
     for(int i=0;i<n;i++)
     {
         scanf("%s",arr[i]);
     }
    
     for(int i=0;i<n-1;i++)
     {
        for(int j=i+1;j<n;j++)
        {
           if(strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp,arr[i]);
                 strcpy(arr[i],arr[j]);
                  strcpy(arr[j],temp);
            }
        }
     }
     for(int i=0;i<n;i++)
     {
         printf("%s\n",arr[i]);
     }
}
     