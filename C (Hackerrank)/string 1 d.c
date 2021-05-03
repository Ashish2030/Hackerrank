#include<stdio.h>
int main()
{
 int i,l,e;
 char temp;
char str [10]="ashishi";
    
    for( i=0; str[i] !='\0';i++)
    {
        l++;
    }
    e=l-1;
 for(i = 0; i < l / 2; i++)
 {
   char temp = str[i];
   str[i] = str[e - i];
   str[e - i] = temp ;
 }
 printf("%s",str);
}