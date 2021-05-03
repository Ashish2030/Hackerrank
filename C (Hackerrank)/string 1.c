#include <stdio.h>
int main() 
{
    int n;
char a[100];
scanf("%[^\n]%*c",a);
char b[100];
scanf("%[^\n]%*c",b);
scanf("%d",&n);
for(int i=0;b[i]!='\0';i++)
{
    if(i<n)
    {
         a[i]=b[i];
    }
  
}
	printf("%s",a);
	return 0;
}
================================================================================================================
#include <stdio.h>
#include <string.h>
int main()
{
    char *p1 = "Raja";
    char *p2;
    p2 = strndup(p1,1);
 
    printf("Duplicated string is : %s", p2);
    return 0;
}\========================================================================================================
#include <stdio.h>
#include <string.h>
int main()
{
    char p1[100] = "Raja";
    char *p2;
    p2 = strndup(p1,1);
 
    printf("Duplicated string is : %s", p2);
    return 0;
}
========================================================================================================
#include <stdio.h>
#include <string.h>
int main()
{
    //char p1[100] = "Raja";
    char p1[20];
    scanf("%[^\n]%*c",&p1);
    char *p2;
    p2 = strndup(p1,1);
 
    printf("Duplicated string is : %s", p2);
    return 0;
}
==========================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^\n]%*c",a);
    char *b;
    b=strdup(a);
    printf("%s",b);
}
=============================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^\n]%*c",a);
    char *b;
    b=strdup(a);
    printf("%s",b);
}
==================================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^\n]%*c",a);
    char *b;
    b=strndup(a,2);
    printf("%s",b);
}
===================================================================================================================
#include <stdio.h>
#include <string.h>
int main ()
{
   char str[100] ; 
   scanf("%[^\n]%*c",str);
   char ch ; 
   scanf("%c",&ch);
   char *p;
   p = strchr(str, ch);
   printf(" %s", p);
   return 0;
}
=====================================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
    char ash[]="this is a plane";
    char a='a';
    char *p;
    p=strrchr(ash,a);
    printf("%s",p);
}
=========================================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%[^\n]%*c",a);
     scanf("%[^\n]%*c",b);
     char *c;
     c=strstr(a,b);
     printf("%s",c);
}
======================================================================================================================

