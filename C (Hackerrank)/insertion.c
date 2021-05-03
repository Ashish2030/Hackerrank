#include<stdio.h>
void sort(int *array,int n);
void sort(int arr[],int n)
{
     for(int i=1;i<n;i++)
{
   int  temp=arr[i],j;
	for( j=i-1;j>=0&&temp<arr[j];j--)
	{
		arr[j+1]=arr[j];
	}
	arr[j+1]=temp;
	
}
}

float Findmedian(int arr[],int n)
{
    if(n%2==0)
    {
        return(( arr[n/2]+arr[(n/2)+1])/2);
    }
    else
    {
        return arr[n/2];
    }
}
int main()
{
	int arr[100],n,temp,j,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
    sort(arr,n);
    float median=Findmedian(arr,n);
   

	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);

   }
    printf("%.2f",median);
return 0;
}
