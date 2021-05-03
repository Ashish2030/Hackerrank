#include<stdio.h>
int main()
{
    int arr1[100][100],arr2[100][100],arr3[100][100],n,m,p,q,sum=0;
    scanf("%d%d",&m,&n);
     scanf("%d%d",&p,&q);
     if(n!=p)
     {
         printf("not allowed");
     }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",*(arr1+i)+j);
        }
    }
     for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",*(arr2+i)+j);
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<p;k++)
            {
                 sum =sum + *(*(arr1+i)+k) * *(*(arr2+k)+j);
            }
           *(*(arr3+i)+j)=sum;
           sum=0;
       }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",*(*(arr3+i)+j));
        }
        printf("\n");
    }
    return 0;
}