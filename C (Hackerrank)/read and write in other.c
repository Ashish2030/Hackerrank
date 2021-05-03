#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char arr[4][20];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%s",&arr[i][0]);
        }
        for(int i=0;i<n;i++)
        {
            printf("%s\n",arr[i]);
        }
    
}