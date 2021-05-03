#include<stdio.h>
int main()
{
	int arr[100],ar[100],n,c,count;
	scanf("%d",&n);
		for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
	    	scanf("%d",&ar[i]);
	}
for( int i=0;i<n;i++)
{
    count=0;
 for(int j=0;j<n-1;j++)
 {
     if(arr[i]==ar[j])
     {
         continue;
     }
     else
     {
         count++;
        
         if(count==n-1)
         {
         c=i;
         }
     }
 }

}    
printf("%d",arr[c]);


return 0;
}
