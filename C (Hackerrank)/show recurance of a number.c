#include<stdio.h>
int main()
{
	int arr[100],n,i,count=0;
	scanf("%d",&n);
		for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int k;
	scanf("%d",&k);
for( i=0;i<n;i++)
{
	if(arr[i]==k)
	{
		count++;
	}
}
printf("%d",count);
return 0;
}
