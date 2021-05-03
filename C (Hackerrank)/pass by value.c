#include<stdio.h>
struct point
{
    int x;
    int y;
}p ={2,3};
void display(int ,int);
int main()
{
    
    display(p.x,p.y);
    return 0;
}
void display(int a,int b)
{
    printf("%d%d",a,b);
}