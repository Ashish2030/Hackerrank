#include <stdio.h>
int main() 
{
    int arr[100][100],sum=0;
     for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
          scanf("%d",&arr[i][j]);
      }
   }
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
       if(i<j)
        {
        sum=sum+arr[i][j];
        }
      }
   }
   printf("%d",sum);
      
	
	return 0;
}