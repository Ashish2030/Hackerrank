#include<stdio.h>
int main()
{
char ash[15];
scanf("%s",ash);
char *ptr;
ptr=ash;
while(*ptr!='\0')
{
printf("%c",*ptr);
ptr++;
}
}

