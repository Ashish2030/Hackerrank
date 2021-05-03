#include <stdio.h>
int main() 
{
	char str[]={"ashishkumar"};
	int l=0;
	for(int i=0;str[i]!='\0';i++)
	{
	    l++;
	}
	for(int i=l-5;str[i]!='\0';i++)
	{
	    printf("%c",str[i]);
	}
	return 0;
}