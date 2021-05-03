#include<stdio.h>
struct complex
{
    int re;
    int imag;
};
struct complex add(struct complex,struct complex);
int main()
{
    struct complex no1,no2,no3;
    scanf("%d%d",&no1.re,&no1.imag);
     scanf("%d%d",&no2.re,&no2.imag);
     no3=add(no1,no2);
     if(no3.imag<0)
     {
         printf("%d%di",no3.re,no3.imag);
     }
     else
     {
         printf("%d+%di",no3.re,no3.imag);
     }
    return 0;
}
struct complex add(struct complex a,struct complex b)
{
    struct complex temp;
    temp.re=a.re+b.re;
    temp.imag=a.imag+b.imag;
    return temp;
}