#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,flag;
    char arr[][20]={"ashish","abhishek","Riya","Arbaz"};
    char a[10];
     scanf("%d",&n);
     scanf("%s",&a);
       for(int i=0;i<n;i++)
     {
         flag=0;
           c=i;
       if(strcmp(arr[i],a)==0)
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