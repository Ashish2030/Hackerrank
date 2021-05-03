#include <stdio.h>
#define num 5
#undef num
int main() 
{
    printf("%d",num);
		return 0;
}

ERROR---------------------------OUTPUT-----------------------------------------------------------------------------------

prog.c: In function 'main':
prog.c:6:17: error: 'num' undeclared (first use in this function)
     printf("%d",num);