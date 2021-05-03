#include <stdio.h>
#define LARGEST(x,y)    (x>=y)?x:y
int main()
{
    int a=10,b=20,l=0;
    l=LARGEST(a++,b++);
 
    printf("a=%d,b=%d,largest=%d",a,b,l);
    return 0;
}