#include <stdio.h>

int main()
{
    int arr[5]={1,1,1,1,1};
    int large=arr[0];
    int second=arr[0];
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(large==arr[i])
        {
            flag=1;
        }
    }
    for(int i=1;i<5;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
   
     for(int i=1;i<5;i++)
    {
       if(large!=arr[i])
       {
           if(second<arr[i])
           {
              second=arr[i];
           }
       }
    }
   
    if(flag==1)
    {
        printf("second largest number not found");
    }
    else
    {
        printf("%d",second);
    }
	return 0;
}