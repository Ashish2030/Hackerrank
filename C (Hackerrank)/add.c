#include<stdio.h>
int main()
{
int a[5][5],b[5][5],c[5][5],n;
scanf("%d",&n);
printf("Enter 1 matrix:");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",(*(b+i)+j));
}
}
printf("\nAddition Matrix:\n");
for(int i=0;i<n;i++)
{ for(int j=0;j<n;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
printf("%d ",*(*(c+i)+j));
}
printf("\n");
}
}