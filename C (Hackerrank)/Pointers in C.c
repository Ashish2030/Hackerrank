#include <stdio.h>

void update(int *a,int *b)
 {
     int c;
      c=*a+*b;
       *b=*a-*b;
       *a=c;
        if(*a<0)
       {
           *a= -1 *(*a);
       }
       if(*b<0)
       {
           *b=-1*(*b);
       }
 }
 

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

