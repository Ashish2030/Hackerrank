#include<stdio.h>
int main()
{
	int arr[100],n,i,first=-1,last;
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
	if(first==-1)
	{

		first=i;
	}
	else
	{
		last=i;
	}
}

}

     
printf("%d\n%d",first,last);


return 0;
}
