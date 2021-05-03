#include <stdio.h>
int main()
{
  int arr1[100][100],arr2[100][100],arr3[100][100],n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          scanf("%d",&arr1[i][j]);
      }
  }
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          scanf("%d",&arr2[i][j]);
      }
  }
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
         arr3[i][j]=arr1[i][j]+arr2[i][j];
      }
  }
    for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("%d     ",arr3[100][100]);
      }
      printf("\n");
  }
    return 0;
}