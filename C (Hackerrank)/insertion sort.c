#include<stdio.h>
int main()
{
	int arr[100],n,temp,j,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
  for(i=1;i<n;i++)
{
    temp=arr[i];
	for(j=i-1;j>=0&&temp<arr[j];j--)
	{
		arr[j+1]=arr[j];
	}
	arr[j+1]=temp;
	
}

	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);

}
return 0;
}
