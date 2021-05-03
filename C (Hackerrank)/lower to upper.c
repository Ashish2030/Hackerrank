#include <stdio.h>
int main() 
{
   
    char str[]={"ashishkumar"};
        for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]-32);
    }
	
	return 0;
}