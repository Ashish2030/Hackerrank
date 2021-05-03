#include <stdio.h>
#define num 5
int  square =num*num;
#undef num
int main() 
{
    printf("%d",square);
		return 0;
}