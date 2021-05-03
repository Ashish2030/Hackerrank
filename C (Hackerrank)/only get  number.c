#include <stdio.h>
int main()
{
    int arr[100],n,b,l,m;
    int flag=0;
    scanf("%d",&n);
    scanf("%d",&m);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   l=n/2;
   b=l-1;
   
  
    if(arr[b]<m)
    {
      
        for(int i=b;i<n;i++)
        {
             
            if(arr[i]==m)
            {
                printf("position=%d",i+1);
                flag=1;
            }
           
        }
          
    }
    else
    {
        
        for(int j=0;j<l;j++)
        {
            if(arr[j]==m)
            {
                printf("position=%d",j+1);
                flag=1;
                
            }
        }
    }
    if(flag==0)
    {
        printf("Not found");
    }


	return 0;
}