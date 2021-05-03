#include <stdio.h>
int main() 
{
    int arr[100][100],count=0;
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
          if(i==j&&arr[i][j]==1)
          {
              count++;
          }
          else if(i!=j&&arr[i][j]==0)
          {
              count++;
          }
      }
   }
   if(count==9)
   {
       printf("yes");
   }
  else
  {
      printf("no");
  }
}