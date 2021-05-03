#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},n=10;
   int  l=10/2;
   int b=l-1;
  
    if(arr[b]<7)
    {
       
        for(int i=b;i<n;i++)
        {
             
            if(arr[i]==7)
            {
                printf("%d",i);
               
            }
            
        }
    }
    else
    {
        for(int j=0;j<l;j++)
        {
            if(arr[j]==7)
            {
                printf("%d",j);
            }
        }
    }


	return 0;
}