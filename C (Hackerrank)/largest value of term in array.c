#include<stdio.h>
int main()
{
	int arr[100],n,x,max=-99999,j,i;
	scanf("%d",&n);
		for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
for( i=0;i<n;i++)
{
		int count=1;
	for(j=i+1;j<n;j++)
	{
   	if(arr[i]==arr[j])
		{
			count++;
	if(count>max)
		{
			max=count;
			x=arr[j];
		}
	}
	}
}
     
printf("%d",x);

return 0;
}
