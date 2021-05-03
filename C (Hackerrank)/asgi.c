#include<stdio.h>
int main()
{
    char ptr[60];
    int line=1,word=1,character=0;
   
    scanf("%[^\n]%*c",ptr);
     char *str=ptr;
    while(*str!='\0')
    {
        if(*str=='\n')

              line++;
            if(*str==' ' && *(str+1)!=' ')
                  word++;
        character++;
        str++;
             
    }
    printf("\n%d %d %d",line,word,character);   
    return 0;
}