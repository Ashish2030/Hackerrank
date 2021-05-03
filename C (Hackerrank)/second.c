#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int large=arr[0];
    int second=arr[0];
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
    printf("%d",second);
	return 0;
}