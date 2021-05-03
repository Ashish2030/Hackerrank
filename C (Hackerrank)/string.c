#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]%*c",str);
    char str1[100];
    scanf("%[^\n]%*c",str1);
    int c=strcmp(str,str1);
    printf("%d",c);
    
}
========================================================================================================================
#include<stdio.h>
int main()
{
    int flag;
    char str[100];
    scanf("%[^\n]%*c",str);
    char str1[100];
    scanf("%[^\n]%*c",str1);
   for(int i=0;str[i]!='\0';i++)
   {
       flag=1;
       if(str[i]!=str1[i])
       {
           flag=0;
           break;
       }
   }
 if(flag==0)
 {
     printf("different");
 }
 else
 {
     printf("same");
 }
}
===================================================================================================================
#include<stdio.h>
int main()
{
    int c;
    int flag;
    char str[100];
    scanf("%[^\n]%*c",str);
    char str1[100];
    scanf("%[^\n]%*c",str1);
   for(int i=0;str[i]!='\0';i++)
   {
       flag=1;
       if(str[i]!=str1[i])
       {
           c=i;
           flag=0;
           break;
       }
   }
if(flag==0)
{
    printf("%d",str[c]-str1[c]);
}
else
{
    printf("0");
}
}
=========================================================================================================================
#include<stdio.h>
int main()
{
    int c,n;
    int flag;
    char str[100];
    scanf("%[^\n]%*c",str);
    char str1[100];
    scanf("%[^\n]%*c",str1);
    scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       flag=1;
       if(str[i]!=str1[i])
       {
           c=i;
           flag=0;
           break;
       }
   }
if(flag==0)
{
    printf("%d",str[c]-str1[c]);
}
else
{
    printf("0");
}
}
=======================================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
  
    int flag;
    char str[100];
    scanf("%[^\n]%*c",str);
    char str1[100];
    scanf("%[^\n]%*c",str1);
 strcpy(str,str1);
 printf("%s",str);
}
==================================================================================================================
#include<stdio.h>
int main()
{
    int c,n,d;
    int flag;
    char str[100];
    scanf("%[^\n]%*c",str);
    char str1[100];
    scanf("%[^\n]%*c",str1);
   for(int i=0;str[i]!='\0';i++)
   {
       str[i]=str1[i];
}
printf("%s",str);
}
=========================================================================================================================
