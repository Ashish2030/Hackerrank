#include<stdio.h>
int main()
{
char ash[]="ashish";
char *ptr;
ptr=ash;
for(int i=0;*ptr!='\0';i++)
{
printf("%c",*ptr);
ptr++;
}
}

