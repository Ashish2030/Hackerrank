#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,flag;
    char arr[][20]={"ashish","abhishek","Riya","Arbaz"};
   char f[ ][20]={"abhishek"};
     scanf("%d",&n);
       for(int i=0;i<n;i++)
     {
         flag=0;
           c=i;
       if(strcmp(arr[i],f[0])==0)
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        printf("%d",c+1);
    }
    else
    {
        printf("Not Found");
    }
}