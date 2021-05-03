#include<stdio.h>
int main()
{
    int i,j;
    char str []="ashish";
    char str1[7]="kumar";
    for( i=0;str[i] !='\0';i++);
   
        for( j=0; str1[j] != '\0';j++)
        {
            str[i] = str1[j];
            i++;
        }
         str[i] = '\0';
    
   
    printf("%s",str);
}