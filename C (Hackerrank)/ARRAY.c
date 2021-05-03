#include <stdio.h>
int main()
{
 int arr1[10][10],arr2[10][10],arr3[10][10],sum=0;

     for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          scanf("%d",&arr1[i][j]);
      }
  }
   for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          scanf("%d",&arr2[i][j]);
      }
  }
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              for(int k=0;k<3;k++)
              {
                  sum=sum+arr1[i][k]*arr2[k][j];
              }
              arr3[i][j]=sum;
          }
      }
       for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          printf("%d    ",arr3[i][j]);
      }
      printf("\n");
  }
	return 0;
}