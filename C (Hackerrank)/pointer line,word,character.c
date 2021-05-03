#include<stdio.h>
int main()
{
char ash[30];
int l=1,w=1,c=0;
scanf("%[^\n]%*c",ash);
char *ptr;
ptr=ash;
while(*ptr!='\0')
{
if(*ptr=='\n')
{
l++;
}
if(*ptr==' ' && *(ptr+1)!=' ')
{
 w++;   
}
c++;
ptr++;
}
printf("%d %d %d",l,w,c);
return 0;
}

