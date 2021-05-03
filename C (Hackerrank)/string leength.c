#include<stdio.h>
#include<string.h>
int main()
{
    
    char s[10]={"ashish"};
    printf("%d",strlen(s));
}
======================================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
    
   char a[10];
   scanf("%s",&a);
    printf("%d",strlen(a));
}
============================================================================================================
#include<stdio.h>
int main()
{
    char name[30];
    gets(name);     
    printf("Name: ");
    puts(name);   
    return 0;
}
===============================================================================================================
#include<stdio.h>
int main()
{
    char a[100];
    int count=0;
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}
========================================================================================
#include<stdio.h>
int main()
{
    char s[100];
    int i=0,count=0;
   scanf("%[^\n]%*c", s);
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]={'a','s','h','i','s','h','\0'};
    printf("%d",strlen(a));
    
}
======================================================================================================================