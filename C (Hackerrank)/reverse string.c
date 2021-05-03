#include<stdio.h>
int main()
{
 int i,l,e;
 char temp;
char str [10]="ashish";
    
    for( i=0; str[i] !='\0';i++)
    {
        l++;
    }
    e=l-1;
 for(i = 0; i < l ; i++,e--)
 {
     if(i<e)
     {
   char temp = str[i];
   str[i] = str[e ];
   str[e ] = temp ;
     }
 }
 printf("%s",str);
}