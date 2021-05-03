#include <stdio.h>

int main()
{
int n,arr[100];
    scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
    int large=arr[0];
    int second=arr[0];
    for(int i=1;i<n;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
   
     for(int i=1;i<n;i++)
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