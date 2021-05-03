#include<stdio.h>
int main()
{
 int i,l=0,e=0,n,j,c=0,k=0;
 char temp;
char str [6]="ashish";
char str1[6]="kumar";
char str2[5];
scanf("%d",&n);
    
 for(i =n; str[i]!='\0' ; i++)
 {
    str2[e]=str[i];
    e++;
 }
  str2[e]='\0';
 
 for( i=0;str1[i]!='\0';i++)
 {
  str[n]=str1[i];
  n++;
 }
 for(i=0;str2[i]!='\0';i++)
 {
 str[n]=str2[i];
 n++;
 }
str[n]!='\0';
 
 printf("%s",str);
 
}