#include <stdio.h>
int main() 
{
    int arr[100][100],a;
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
          printf("%d",arr[j][i]);
      }
      printf("\n");
   }
 return 0;
}
    
    