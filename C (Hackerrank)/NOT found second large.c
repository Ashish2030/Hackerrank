#include <stdio.h>

int main()
{ int n,arr[100];
    scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
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