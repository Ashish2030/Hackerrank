#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,flag;
    char arr[4][20]={"ashish","abhishek","Riya","Arbaz"};
   char found_name;
     scanf("%d",&n);
    scanf("\n%s", &found_name);
     for(int i=0;i<n;i++)
     {
         flag=0;
           c=i;
       if(strcmp(arr[i],"Riya")==0)
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