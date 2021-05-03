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
   if(m<arr[0]||m>arr[n-1])
   {
       flag=1;
   }
   
  
    if(arr[b]<m)
    {
     
        for(int i=b;i<n;i++)
        {
             
            if(arr[i]==m)
            {
                printf("%d",i);
            }
           
        }
          
    }
    else
    {
        
        for(int j=0;j<l;j++)
        {
            if(arr[j]==m)
            {
                printf("%d",j);
                
            }
        }
    }
    if(flag==1)
    {
        printf("not found");
    }


	return 0;
}